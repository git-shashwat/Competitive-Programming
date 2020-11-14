//https://www.codechef.com/SEPT20B/problems/ADAMAT
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back 
#define po pop_back 
#define MAX_SIZE 64

using namespace std;

void transpose(int a[MAX_SIZE][MAX_SIZE], int n) 
{ 
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++)
            swap(a[i][j], a[j][i]);
}

int main(){
    test {
	int n, ans = 0;
	int a[MAX_SIZE][MAX_SIZE];
	cin>>n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin>>a[i][j];
		}
	}
	for (int i = 0; i < n;) {
		int flag = 0;
		for (int j = n-1; j >= 0; --j) {
			if(a[i][j] != (i * n + j) + 1) {
				ans++;
				transpose(a, max(i, j) + 1);
				flag = 1;
				break;
			}
		}
		flag ? i = 0 : ++i;
	}
	cout<<ans<<endl;
	}
    return 0;
}
