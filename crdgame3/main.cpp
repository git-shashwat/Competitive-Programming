//https://www.codechef.com/AUG20B/problems/CRDGAME3
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

int main(){
    test {
		int pc, pr;
		cin>>pc>>pr;
		int pc_cnt = 0, pr_cnt = 0;

		pc_cnt = pc/9;
		if ((pc % 9) != 0)	pc_cnt++;
		pr_cnt = pr/9;
		if ((pr % 9) != 0)	pr_cnt++;

		if (pc_cnt < pr_cnt) {
			cout<<"0 "<<pc_cnt<<"\n";
		} else {
			cout<<"1 "<<pr_cnt<<"\n";
		}
	}
    return 0;
}
