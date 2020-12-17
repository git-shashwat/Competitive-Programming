// C++ program to implement 
// the above approach 
  
#include <bits/stdc++.h> 
#define MOD 1000000007
#define ull unsigned long long
using namespace std; 
  
// Structure of Trie 
struct TrieNode { 
    // Stores characters of 
    // each string 
    TrieNode* child[256]; 
  
    TrieNode() 
    { 
        child[0] = child[1] = NULL; 
    } 
}; 
  
// Function to insert a string into Trie 
void insertTrie(TrieNode* root, 
                string str) 
{ 
  
    // Stores length of the string 
    int M = str.length(); 
  
    // Traverse the string str 
    for (int i = 0; i < M; 
         i++) { 
  
        // If str[i] is not present 
        // in current path of Trie 
        if (!root->child[str[i]]) { 
  
            // Create a new node 
            // of Trie 
            root->child[str[i]] 
                = new TrieNode(); 
        } 
  
        // Update root 
        root = root->child[str[i]]; 
    } 
} 
  
// Function to find the maximum length of 
// longest common prefix in Trie with str 
int findStrLen(TrieNode* root, string str) 
{ 
  
    // Stores length of str 
    int M = str.length(); 
  
    // Stores length of longest 
    // common prefix in Trie with str 
    int len = 0; 
  
    // Traverse the string str 
    for (int i = 0; i < M; i++) { 
  
        // If str[i] is present in 
        // the current path of Trie 
        if (root->child[str[i]]) { 
  
            // Update len 
            len++; 
  
            // Update root 
            root 
                = root->child[str[i]]; 
        } 
        else { 
            return len; 
        } 
    } 
    return len; 
} 
  
// Function to print the pair having maximum 
// length of the longest common prefix 
void findMaxLenPair(vector<string>& arr, 
                    int N) 
{ 
    // Stores index of the string having 
    // maximum length of longest common prefix 
    int idx = -1; 

    ull sum = 0;
  
    // Stores maximum length of longest 
    // common prefix. 
    int len = 0; 
  
    // Create root node of Trie 
    TrieNode* root = new TrieNode(); 
  
    // Insert arr[0] into Trie 
    insertTrie(root, arr[0]); 
  
    // Traverse the array. 
    for (int i = 1; i < N; i++) { 
  
        // Stores maximum length of longest 
        // common prefix in Trie with arr[i] 
        int temp = findStrLen(root, arr[i]); 
        sum += (temp*temp) % MOD;
  
        // If temp is greater than len 
        if (temp > len) { 
  
            // Update len 
            // len = temp; 
  
            // Update idx 
            idx = i; 
        } 
  
        insertTrie(root, arr[i]); 
    } 
  
    // Traverse array arr[] 
    for (int i = 0; i < N; i++) { 
  
        // Stores length of arr[i] 
        int M = arr[i].length(); 
  
        // Check if maximum length of 
        // longest common prefix > M 
        if (i != idx && M >= len) { 
  
            // Traverse string arr[i] 
            // and arr[j] 
            for (int j = 0; j < len; 
                 j++) { 
  
                // If current character of both 
                // string does not match. 
                if (arr[i][j] 
                    != arr[idx][j]) { 
                    break; 
                } 
            } 
  
            // Print pairs having maximum length 
            // of the longest common prefix 
            cout <<sum<<endl;
            return; 
        } 
    } 
} 
  
// Driver Code 
int main() 
{ 
    int n;
    cin>>n;
    vector<string> arr;
    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        arr.push_back(s);
    }
    // vector<string> arr 
    //     = { "india",
    //         "republic", "and", "independent" }; 
  
    // int N = arr.size(); 
    findMaxLenPair(arr, n); 
} 
