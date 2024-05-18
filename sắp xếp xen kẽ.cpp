#include <bits/stdc++.h>
using namespace std;

void check(int a[], int n) {
    int i, j, min, tmp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
}

void sapxep(int a[], int n) {
    check(a, n);
    for (int i = 0; i < n / 2; i++) {
        cout << a[n - i - 1] << " " << a[i] << " ";
    }
    if (n % 2 != 0) {
        cout << a[n / 2];
    }
    cout << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sapxep(a, n);
    }
    return 0;
}
