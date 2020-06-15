//https://www.codechef.com/LRNDSA04/problems/EURON
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

ll merge(ll a[], int l, int mid, int r) {
	ll ans = 0;
	int i, j, k;
	int n1 = mid - l + 1;
	int n2 = r - mid;
	
	ll L[n1], R[n2];
	
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[mid + 1 + j]; 
	
	i = 0;
	j = 0;
	k = l;
	
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			a[k] = L[i];
			i++;
		} else {
			ans += (n1 - i);
			a[k] = R[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
		a[k++] = L[i++];
	}
	
	while (j < n2) {
		a[k++] = R[j++];
	}
	return ans;
}

ll mergeSort (ll a[], int l, int r) {
	ll ans = 0;
	if (l < r) {
		int mid = l + (r-l)/2;
		
		ans += mergeSort(a, l, mid);
		ans += mergeSort(a, mid+1, r);
		
		ans += merge(a, l, mid, r);
	}
	return ans;
}

int main(){
    int n;
    cin>>n;
    ll a[n];
    loop0 (n) {
    	cin>>a[i];
	}
	ll ans = mergeSort(a, 0, n-1);
	cout<<ans;
    return 0;
}
