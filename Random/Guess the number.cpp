#include <iostream>
#include <string.h>

using namespace std;

int main () {
    int low = 1, high = 1000000;
    
    while(low != high) {
        int mid = (high + low + 1)/2;
        cout<<mid<<endl;
        
        char res[3];
        cin>>res; 
        if (strcmp(res, "<") == 0) {
            high = mid-1;
        } else {
            low = mid;
        }
    }
    cout<<"! "<<low<<endl;
}
