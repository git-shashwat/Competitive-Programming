//https://www.codechef.com/LRNDSA03/problems/CVOTE
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
    int n, m;
    cin>>n>>m;
    string name, country;
    map <string, string> name_country_map;
    map <string, int> country_count, votes_count;
    loop0(n) {
        cin>>name>>country;
        name_country_map[name] = country;
    }
    loop0(m) {
        cin>>name;
        votes_count[name]++;
        country_count[name_country_map[name]]++;
    }
    int maxVoteCnt = -10000001, maxCountryCnt = -10000001;
    for (auto i:country_count) {
        if (i.second > maxCountryCnt) {
            country = i.first;
            maxCountryCnt = i.second;
        }
    }
    for (auto i:votes_count) {
        if (i.second > maxVoteCnt) {
            name = i.first;
            maxVoteCnt = i.second;
        }
    }
    cout<<country<<"\n"<<name;
    return 0;
}
