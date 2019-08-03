//Kadane's Algorithm practice
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int kadaneAlgo(int a[], int n){
    int current = 0, answer = INT_MIN;
    for (int i = 0; i < n; i++){
        current = max(a[i], current + a[i]);
        answer = max(answer, current);
    }
    return answer;
}

int main(){
    int a[8] = {92,-3,4,-1,8,1,5,-3};
    int ans = kadaneAlgo(a,8);
    cout<<ans;
    return 0;
}
