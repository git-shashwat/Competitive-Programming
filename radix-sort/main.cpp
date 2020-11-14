#include <iostream>
#include <time.h>

using namespace std;

void delay(unsigned int msec)
{
    clock_t goal;
    do{
        goal = msec + clock();
    }while(goal>clock());
}

int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

void countSort(int arr[], int n, int exp)
{
	int output[n];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

void radixsort(int arr[], int n)
{
	int m = getMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
	int n = sizeof(arr) / sizeof(arr[0]);
	float t;
    	clock_t start,stop;
        start = clock();
	
	cout<<"Orignal array: ";
	print(arr, n);
	
	cout<<"\nSorted array: ";
	radixsort(arr, n);
	delay(80);
	stop=clock();
    	t=(stop-start)/CLOCKS_PER_SEC;
	print(arr, n);
	cout<<endl;
	cout<<"Time taken: "<<t<<endl;
	return 0;
}

