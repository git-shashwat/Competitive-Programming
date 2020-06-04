//https://www.codechef.com/LRNDSA03/problems/SAVKONO
#include<bits/stdc++.h>
#include<limits.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(b) for(int i=0;i<b;++i)
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
#define pb push_back 
#define po pop_back 

using namespace std;

int main(){
    FastIO
    test {
        bool canBeDefeated = true;
        int N, ans = 0;
        ll Z;
        cin>>N>>Z;
        int A[N];
        priority_queue <int> pq;
        loop0(N) {
            cin>>A[i];
            pq.push(A[i]);
        }
        while(Z>0) {
            if (pq.top() == 0) {
                canBeDefeated = false;
                break;
            } else {
                int maxPwr = pq.top();
                Z -= maxPwr;
                pq.pop();
                pq.push(maxPwr/2);
                ans++;    
            }
        }
        canBeDefeated ? cout<<ans<<"\n" : cout<<"Evacuate\n";
    }
    return 0;
}
