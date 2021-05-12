#include <bits/stdc++.h>

using namespace std;

int visited[1000][1000] = {0};

bool checkIfTrap(int i, int j, int m, int n, char *arr) {
    visited[i][j] = 1;
    if (*((arr+i*n) + j) == '*')
        return true;
    if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
        return false;

    bool res = true;
    if (!visited[i-1][j]) {
        res = res && checkIfTrap(i-1, j, m, n, (char *)arr);
    }
    if (!visited[i][j-1]) {
        res = res && checkIfTrap(i, j-1, m, n, (char *)arr);
    }
    if (!visited[i+1][j]) {
        res = res && checkIfTrap(i+1, j, m, n, (char *)arr);
    }
    if (!visited[i][j+1]) {
        res = res && checkIfTrap(i, j+1, m, n, (char *)arr);
    }
    return res;
}

int countOfTraps(int m, int n, char *arr) {
    int count = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (*((arr+i*n) + j) == '.')
            	if(checkIfTrap(i, j, m, n, (char *)arr))    count++;
        }
    }
    return count;
}

int main() {
    int m, n;
    cin>>m>>n;
    char arr[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
        }
    }

    int ans = countOfTraps(m, n, (char *)arr);
    cout<<ans;
}
