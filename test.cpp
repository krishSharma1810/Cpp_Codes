#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, n;
    cin >> t;
    while (t > 0) {
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            A[i] = i + 1;
        }

        for (int i=0;i<n;i++){
            cout << A[i]<<endl;
        }
    }
}