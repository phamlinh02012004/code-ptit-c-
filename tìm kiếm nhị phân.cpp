#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, X;
        cin >> n >> X;
        
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        
        if (binary_search(A.begin(), A.end(), X)) {
            cout << "1" << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    
    return 0;
}