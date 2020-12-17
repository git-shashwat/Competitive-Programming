//http://codeforces.com/contest/1462/problem/C
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(n) for(int i=0;i<n;++i)
#define rloop0(n) for(int i=n;i>=0;--i)
#define rloop(a,b) for(int i=b; i>=a; --i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define mi map<int,int>
#define si set<int>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

void findSmallest(int m, int s) 
{ 
    if (s == 0) 
    { 
        (m == 1)? cout<<0<<endl 
                : cout<<"-1\n"; 
        return ; 
    } 
  
    if (s > 9*m) 
    { 
        cout << "Not possible"; 
        return ; 
    } 
  
    int res[m]; 

    s -= 1; 
  
    for (int i=m-1; i>0; i--) 
    { 
        if (s > 9) 
        { 
            res[i] = 9; 
            s -= 9; 
        } 
        else
        { 
            res[i] = s; 
            s = 0; 
        } 
    } 
 
    res[0] = s + 1;
  
    cout << "Smallest number is "; 
    for (int i=0; i<m; i++) 
        cout << res[i]; 
} 

int main(){
    int s = 9, m = 9; 
    findSmallest(m, s);
    return 0;
}
