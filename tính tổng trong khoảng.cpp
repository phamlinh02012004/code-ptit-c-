#include <iostream>
#include <vector>

using namespace std;

// Hàm tính tổng các phần tử của mảng A trong đoạn từ L đến R
int sum(vector<int>& arr, int L, int R) {
    int sum = 0;
    for (int i = L-1; i < R; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, Q;
        cin >> n >> Q;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int q = 0; q < Q; q++) {
            int L, R;
            cin >> L >> R;
            cout << sum(v, L, R) << endl;
        }
    }

    return 0;
}