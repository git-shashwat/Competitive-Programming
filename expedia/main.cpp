//Convert “12th Dec 1989” to “12-12-1989”
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

int main(){
    char s[] = "23rd Jan 2004";
    char *token = strtok(s, " "); 
    vector<string> v;
    map<string, string> m = {
    	{"Jan", "01"}, 
    	{"Feb", "02"}, 
    	{"Mar", "03"}, 
    	{"Apr", "04"}, 
    	{"May", "05"}, 
    	{"Jun", "06"}, 
    	{"Jul", "07"}, 
    	{"Aug", "08"}, 
    	{"Sep", "09"}, 
    	{"Oct", "10"}, 
    	{"Nov", "11"}, 
    	{"Dec", "12"}
    };
    
    while (token != NULL) 
    { 
	v.pb(token);
        token = strtok(NULL, " "); 
    }
    
    string date = v[0].substr(0, 2);
    string month = m[v[1]];
    string year = v[2];
    
    cout<<date<<"-"<<month<<"-"<<year<<endl;
    
    return 0;
}
