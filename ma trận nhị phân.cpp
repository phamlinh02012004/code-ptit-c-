#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int dem = 0;
    for (int i = 0; i < n; i++) {
        int dem_0 = 0, dem_1 = 0;
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1) {
                dem_1++;
            } else {
                dem_0++;
            }
        }
        if (dem_1 > dem_0) {
            dem++;
        }
    }

    cout << dem << endl;

    return 0;
}