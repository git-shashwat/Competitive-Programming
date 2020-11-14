#include <iostream>
#include <time.h>
using namespace std;

double search(long long arr[],long int n,long long val){
    clock_t start = clock();
    long int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i] == val){
            cout<<"Element found at index "<<i<<endl;
            break;
        }
    }
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    return cpu_time_used;
}

int main() {
    long int n = 1000000;
    long long arr[1000000];
    for(long long i=0;i<1000000;i++){
        arr[i]=i+1;
    }
    cout<<"Best case : "<<search(arr,n,1)<<endl;
    cout<<"Average case : "<<search(arr,n,n/2)<<endl;
    cout<<"worst case : "<<search(arr,n,n)<<endl;
    return 0;
}
