//https://www.spoj.com/problems/MMASS/
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

int massCalculator(char c) {
    if (c == 'H')
        return 1;
    if (c == 'C')
        return 12;
    if (c == 'O')
        return 16;
}

int suffix(char c) {
    return c - '0';
}

int main(){
    std::stack<int> s;
    int mass = 0;
    string molecule;
    cin>>molecule;
    
    loop0(molecule.size()) {
        if (molecule[i] == '(') {
            s.push(-1);   
        } else if (isalpha(molecule[i])) {
            s.push(massCalculator(molecule[i]));
        } else if (isdigit(molecule[i])) {
            int n = s.top();
            s.pop();
            s.push(n * suffix(molecule[i]));
        } else if (molecule[i] == ')') {
            int blockMass = 0;
            while(s.top() != -1) {
                blockMass += s.top();
                s.pop();
            }
            s.pop();
            s.push(blockMass);
        }
    }
    
    while(!s.empty()) {
        mass += s.top();
        s.pop();
    }
    
    cout<<mass;
    
    return 0;
}
