//http://codeforces.com/contest/1420/problem/A
#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define loop0(n) for(int i=0;i<n;++i)
#define rloop0(n) for(int i=n;i>=0;--i)
#define rloop(a,b) for(int i=b; i>=a; --i)
#define MOD 1000000007
#define ull unsigned long long
#define int long long
#define vi vector<int>
//#define vl vector<int>
#define mi map<int,int>
#define si set<int>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

/*
	N -> Cubes ; ith cube volume = ai
	Best case scenario: Cubes arranged in ascending order such that number of echange operations is less than n(n-1)/2 - 1
*/

ull _mergeSort(int a[], int temp[], int left, int right);
ull merge(int a[], int temp[], int left, int mid, int right);

ull mergeSort(int a[], int n) {
	int temp[n];
	return _mergeSort(a, temp, 0, n-1);
}

ull _mergeSort(int a[], int temp[], int left, int right) {
	int mid;
	ull inv_count = 0;
	if (right > left) {
		mid = (right + left) / 2;

		inv_count += _mergeSort(a, temp, left, mid);
		inv_count += _mergeSort(a, temp, mid + 1, right);

		inv_count += merge(a, temp, left, mid+1, right);
	}
	return inv_count;
}

ull merge(int a[], int temp[], int left, int mid, int right) {
	int i, j, k;
	ull inv_count = 0;

	i = left;
	j = mid;
	k = left;

	while((i <= mid-1) && (j <= right)) {
		if (a[i] <= a[j]) {
			temp[k++] = a[i++];
		} else {
			temp[k++] = a[j++];

			inv_count = inv_count + (mid - i);
		}
	}

	while (i <= mid - 1)
		temp[k++] = a[i++];
	while (j <= right)
		temp[k++] = a[j++];
	for (i = left; i <= right; i++)
		a[i] = temp[i];

	return inv_count;
}

signed main(){
    test {
		int n;
		cin>>n;
		ull MAX_SWAPS = n == 1 ? 0 : n*(n-1)/2 - 1;
		int a[n];
		loop0(n)	cin>>a[i];
		ull cnt = mergeSort(a, n);
		if (cnt <= MAX_SWAPS)	cout<<"YES\n";
		else			cout<<"NO\n";
	}
    return 0;
}
