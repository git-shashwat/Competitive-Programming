#include <algorithm> 
#include <iostream> 
#include <vector> 
#include <time.h>

using namespace std; 

void delay(unsigned int msec)
{
    clock_t goal;
    do{
        goal = msec + clock();
    }while(goal>clock());
}

void bucketSort(float arr[], int n) 
{ 
	vector<float> b[n]; 

	for (int i = 0; i < n; i++) { 
		int bi = n * arr[i];
		b[bi].push_back(arr[i]); 
	} 
 
	for (int i = 0; i < n; i++) 
		sort(b[i].begin(), b[i].end()); 

	int index = 0; 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < b[i].size(); j++) 
			arr[index++] = b[i][j]; 
} 

int main() 
{ 
	float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 }; 
	int n = sizeof(arr) / sizeof(arr[0]);
        float t;
        clock_t start,stop;
        start = clock();
	cout << "Given array is: "; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout<<endl;
	
	bucketSort(arr, n); 
	delay(75);
	stop=clock();
    	t=(stop-start)/CLOCKS_PER_SEC;

	cout << "Sorted array is: "; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " ";
	cout<<endl; 
	cout<<"Time taken: "<<t<<endl;
	return 0; 
} 

