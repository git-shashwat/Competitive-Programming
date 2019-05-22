//https://www.codechef.com/APRIL19B/problems/MAXREM
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
using namespace std;
/*declaration of LastOccurance*/
long LastOccurance(long long x,long long arr[],long size){
    long low=0,high=size-1,pos=-1;
    while(low<=high){
        long mid=low+(high-low)/2;
        if(x==arr[mid]){
            pos=mid;
            low=mid+1;
        }
        else if(x<arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return pos;
}
int main(){
    long N,pos=0;
    cin>>N;
    long long A[N];
    loop(i,0,N)
       cin>>A[i];
    sort(A,A+N,greater<long long>());
    if(A[0]==A[N-1]){
        cout<<"0";
        exit(0);
    }
/*    loop(i,1,N){
        if(A[i+1]<A[0]){
            pos=i;
            break;
        }
    }
    cout<<A[pos]%A[0];*/
    pos=LastOccurance(A[0],A,N);
    cout<<A[pos+1]%A[0];
    return 0;
}
