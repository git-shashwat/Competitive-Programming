//https://www.codechef.com/problems/CLETAB
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false);    cin.tie(false);
#define test int t; cin>>t; while(t--)
#define loop(i,a,b) for(ll i=a;i<b;++i)
#define MOD 1000000007
#define ll long long
#define MAX_CUSTOMER_ID 800
#define M 800
using namespace std;

vector <bool> present(MAX_CUSTOMER_ID+1);
vector <int> last_seen(MAX_CUSTOMER_ID+1);
vector <int> present_before(MAX_CUSTOMER_ID);

vector <int> customer(M);
int main(){
 test{
     int n,m,ans=0;
     cin>>n>>m;
     loop(i,0,m){
         cin>>customer[i];
         last_seen[customer[i]]=i;
     }
     fill(present.begin(),present.end(),false);
     fill(present_before.begin(),present_before.end(),0);
     
     int order_no=0;
     while(order_no<m&&ans<n||present[customer[order_no]]){
         if(!present[customer[order_no]]){
             present[customer[order_no]]=true;
             ans++;
         }
         order_no++;
     }
     while(order_no<m){
         if(!present[customer[order_no]]){
         //Checking if no customer is repeated
         int player=-1;
             for(int i=order_no-1;i>=0;--i){
                 if(present[customer[i]]&&last_seen[customer[i]]==i){
                     player=customer[i];
                     break;
                 }
             }
             if(player==-1){
                 for(int i=order_no+1;i<m;++i){
                     if(present[customer[i]]&&present_before[customer[i]]!=order_no){
                        player=customer[i];
                        present_before[customer[i]]=order_no;
                     }
                 }
             }
             present[player]=false;
             present[customer[order_no]]=true;
             ans++;
         }
         order_no++;
     }
     cout<<ans<<"\n";
 }
return 0;
}
