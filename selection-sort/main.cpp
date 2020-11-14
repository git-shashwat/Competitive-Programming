#include <stdio.h>
#include <time.h>

void delay(unsigned int msec)
{
    clock_t goal;
    do{
        goal = msec + clock();
    }while(goal>clock());
}

void printArr(int a[], int size) {
	for (int i = 1; i < size; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void sel(int a[], int n)
{
    int i,j,min,temp;
    for(i=1;i<=n-1;i++)
    {
        min=a[i];
        for(j=i;j<=n;j++)
        {
            if(a[j]<=min)
            {
                min=a[j];
                temp=j;
            }
        }
        if(temp==n)
        {
            for(j=n;j>i;j--)
            {
                {
                    a[j]=a[j-1];
                }
            }
            a[i]=min;
        }
        else if(temp==i)
        {
            continue;
        }
        else
        {
            for(j=temp;j>i;j--)
            {
                {
                    a[j]=a[j-1];
                }
            }
            a[i]=min;
        }
    }
    printf("Sorted array is: ");
    printArr(a, n);
}

int main()
{
    const int n = 11;
    int a[n],i;
    float t;
    clock_t start,stop;
    start = clock();
    a[0] = 0;
    for(int i = 1; i < n; ++i){
		a[i] = n-i;
	}
    printf("Given array: ");
    printArr(a, n);
    sel(a,n);
    stop=clock();
    t=(stop-start)/CLOCKS_PER_SEC;
    printf("Time taken: %f\n",t);

    return 0;
}
