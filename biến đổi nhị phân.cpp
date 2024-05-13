#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> row(n, 0), col(m, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
                if(a[i][j] == 1) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(row[i] == 1 || col[j] == 1) {
                    cout << 1 << " ";
                } else {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
