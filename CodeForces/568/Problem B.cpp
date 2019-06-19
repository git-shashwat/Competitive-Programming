//http://codeforces.com/contest/1185/problem/B
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;++i)
#define MOD 1000000007
#define lo long
#define ll long long
#define push_back pb
#define pop_back po
using namespace std;

/*Definition of comparePos*/
bool comparePos(map <char,int> spos, map <char,int> tpos){
    if (spos != tpos)   return false;
    auto itr1 = spos.begin(), itr2 = tpos.begin();
    for(;itr1 !=spos.end(),itr2 != tpos.end(); itr1++, itr2++){
        int a = itr1->second, b = itr2->second;
        if(abs(a-b) > 1)
            return false;
    }
    return true;
}

int main(){
    test{
        string s,t;
        cin>>s;
        cin>>t;
        map <char,int> smap,tmap,spos,tpos;
        loop(i,0,s.length()){
            smap[s[i]]++;
            if(spos[s[i]] == 0) spos[s[i]] = i;
        }
        loop(i,0,t.length()){
            tmap[t[i]]++;
            if(tpos[t[i]] == 0) tpos[t[i]] = i;
        }
        if (comparePos(spos,tpos) && (tmap >= smap)){
            cout<<"YES\n";
        }
        else    cout<<"NO\n";
    }
    return 0;
}
