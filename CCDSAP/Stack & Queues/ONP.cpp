//https://www.spoj.com/problems/ONP/
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

int priority(char c) {
    if (c == '+')
        return 1;
    if (c == '-')
        return 2;
    if (c == '*')
        return 3;
    if (c == '/')
        return 4;
    if (c == '*')
        return 5;
}

bool isoperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    return false;
}

bool priorityChecker(char a, char b) {
    return priority(a) < priority(b);
}

int main(){
    test {
        std::stack<char> s;
        string infix, postfix;
        cin>>infix;
        loop0(infix.size()) {
            if(isalpha(infix[i])) {
                postfix += infix[i];
            } else if (isoperator(infix[i]) && isoperator(s.top())) {
                while(priorityChecker(infix[i], s.top())) {
                    postfix += s.top();
                    s.pop();
                }
            } else if (infix[i] == ')') {
                while(s.top() != '(') {
                    postfix += s.top();
                    s.pop();
                }
                s.pop();
            } else {
                s.push(infix[i]);
            }
        }
        cout<<postfix<<"\n";
    }
    return 0;
}
