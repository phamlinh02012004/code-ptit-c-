#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;

        if (isupper(c)) {
            cout << char(tolower(c)) << endl;
        } else if (islower(c)) {
            cout << char(toupper(c)) << endl;
        }
    }
    return 0;
}