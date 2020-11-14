#include <stdio.h>
#include <time.h>
void delay(unsigned int msec)
{
    clock_t goal;
    do{
        goal = msec + clock();
    } while(goal>clock());
}
void bub(int a[], int n)
{
    int i,j,temp;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted array is: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[11],i;
    const int n = 11;
    float t;
    clock_t start,stop;
    //delay(500);
    start = clock();
    for(int i = 10; i >= 1; --i)	{
		a[i] = i;
	}
    bub(a,n-1);
    stop=clock();
    t=(stop-start)/CLOCKS_PER_SEC;
    printf("\nTime taken: %f\n",t);

   return 0; 
}
