#include<bits/stdc++.h>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    unordered_map<string, int> emailCount; // Để theo dõi số lượng email
    while(t--){
        string s;
        getline(cin, s);
        for(char &x : s) x = tolower(x); // Chuyển tất cả ký tự thành chữ thường
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        int n = v.size();
        string email = v[n - 1];
        for(int i = 0; i < n - 1; i++){
            email += v[i][0];
        }
        // Kiểm tra và thêm số thứ tự nếu cần
        emailCount[email]++;
        if(emailCount[email] > 1) {
            email += to_string(emailCount[email] );
        }
        cout << email << "@ptit.edu.vn" << endl;
    }
    return 0;
}