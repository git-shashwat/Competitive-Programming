//https://www.codechef.com/LRNDSA02/problems/ZCO12001
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

bool isOperand (char c) {
    if (isalpha(c))
        return true;
    return false;
}

bool isOperator (char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    return false;
}

bool precedenceCalc (char a, char b, std::map<char, int> mp) {
    if (mp[b] <= mp[a])
        return true;
    else
        return false;
}

int main(){
    FastIO
    std::map<char, int> mp;
    mp['+'] = -1;
    mp['-'] = -1;
    mp['/'] = 0;
    mp['*'] = 0;
    mp['^'] = 1;
    test {
        int n;
        cin>>n;
        char s[n+2];
        s[0] = '(';
        s[n+1] = ')';
        std::vector<char> pf;
        std::stack<char> st;
        loop(1, n+1) {
            cin>>s[i];
        }
        loop0(n+2) {
            if (s[i] == '(') {
                st.push(s[i]);
            }
            else if (isOperand(s[i])) {
                pf.pb(s[i]);
            }
            else if (isOperator(s[i])) {
                while(!st.empty() && isOperator(st.top()) && precedenceCalc(st.top(), s[i], mp)) {
                    pf.pb(st.top());
                    st.pop();
                }
                st.push(s[i]);
            }
            else {
                while(!st.empty() && st.top() != '(') {
                    pf.pb(st.top());
                    st.pop();
                }
                st.pop();
            }
        }
        loop0(pf.size()) {
            cout<<pf[i];
        }
        cout<<"\n";
    }
    return 0;
}
