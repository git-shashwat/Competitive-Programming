//https://www.codechef.com/LRNDSA05/problems/KPRIME
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

using namespace std;

const int  N = 1e5 + 5;

int A[N];
int prefix[N][6];

int prime_factor[N];
vector <pair <int, int> > prime_factors[N];

int main() {
	FastIO
        for (int i = 2; i < N; i++) {
                if (prime_factor[i] != 0) continue;
                prime_factor[i] = i;
                for (int j = 2*i; j < N; j += i) {
                        prime_factor[j] = i;
                }
        }
        for (int i = 2; i < 36; ++i) {
                int x = i;
                map <int, int> M;
                while (x != 1) {
                        M[prime_factor[x]]++;
                        x /= prime_factor[x];
                }
                for (auto v: M) {
                       prime_factors[i].push_back(v);
                }
        }

	loop(1,N)       A[i] = prime_factors[i].size();
        loop(1,N) {
               for (int k = 1; k <= 5; k++) {
                         prefix[i][k] = prefix[i-1][k] + (A[i] == k);
                }
        }

        test {
	        int l, r, k;
        	cin>>l>>r>>k;
		cout<<prefix[r][k] - prefix[l - 1][k]<<"\n";
        }

        return 0;
}

