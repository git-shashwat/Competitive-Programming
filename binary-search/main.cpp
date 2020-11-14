#include <iostream>
#include <time.h>
using namespace std;

double search(long long arr[],long int n,long long val){
    long int beg = 0, last = n-1,mid;
    clock_t start = clock();
    while(beg<=last){
        mid = (beg+last)/2;
        if(arr[mid] == val){
            break;
        }
        else if(arr[mid] > val){
            beg = mid+1;
        }
        else{
            last = mid-1;
        }
    }
    clock_t end = clock();
    cout<<"Element found at index "<<mid<<endl;
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    return cpu_time_used;
}

int main() {
    long int n = 1000000;
    long long arr[1000000];
    for(long long i=0;i<1000000;i++){
        arr[i]=i+1;
    }
    cout<<"Average case : "<<search(arr,n,1)<<endl;
    cout<<"Best case : "<<endl<<search(arr,n,n/2)<<endl;
    cout<<"worst case : "<<search(arr,n,n)<<endl;
    return 0;
}
