//https://www.codechef.com/LRNDSA02/problems/PSHOT
#include<bits/stdc++.h>
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

bool onlyOne(bool a, bool b, bool c) {
    int truthyCount = !!a + !!b + !!c;
    return truthyCount == 1;
}

int main(){
    FastIO
    test {
        int n, goalCountA = 0, goalCountB = 0, s;
        bool isFound = false;
        cin>>n;
        s = 2*n;
        char S[2*n];
        loop0(2*n) {
            cin>>S[i];
            if (!(i&1)) {
                if (S[i] == '1')    goalCountA++;
            } else {
                if (S[i] == '1')    goalCountB++;
            }
            bool isWinnable = i&1 ? (n-i/2-1)+goalCountA > goalCountB : (n-i/2-1)+goalCountA > goalCountB;
            bool isLossable = i&1 ? goalCountA < (n-i/2-1)+goalCountB : goalCountA < (n-i/2)+goalCountB;
            bool isDrawable = (i&1 ? goalCountA == (n-i/2-1)+goalCountB : goalCountA == (n-i/2)+goalCountB) || (i&1 ? (n-i/2-1)+goalCountA == goalCountB : (n-i/2-1)+goalCountA == goalCountB);
            if (onlyOne(isWinnable, isLossable, isDrawable) && !isFound) {
                s = i+1;
                isFound = !isFound;
            }
        }
        cout<<s<<"\n";
    }   
    return 0;
}
