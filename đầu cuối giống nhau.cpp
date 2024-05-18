#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore(); 
    while (T--) {
        string s;
        getline(cin, s);
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                if (s[i] == s[j]) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

