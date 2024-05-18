#include<bits/stdc++.h>
using namespace std;

void check(string s) {
    int count = 1;
    char c = s[0];
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == c) {
            count++;
        } else {
            cout << c << count;
            c = s[i];
            count = 1;
        }
    }
    cout << c << count << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        check(s);
    }
    return 0;
}
