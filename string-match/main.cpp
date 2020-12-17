#include <iostream>
using namespace std;

void search(string text, string patt) {
    int m = patt.size();
    int n = text.size();

    for (int i = 0; i <= n-m; i++) {
        int j;

        for (j = 0; j < m; j++) {
            if (text[i + j] != patt[j]) {
                break;
            }
        }

        if (j == m) {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main() {
    string text = "DDHDHHHRRHDRRDD";
    string patt = "RHD";

    search(text, patt);

    return 0;
}
