#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void convert(string &s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

void hoa(string &s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
}

int main() {
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
        v.push_back(tmp);
    }

    int n = v.size();
    for (int i = 0; i < v.size() - 2; i++) {
        convert(v[i]);
        cout << v[i] << " ";
    }
    convert(v[n - 2]);
    cout << v[n - 2] << ",";
    hoa(v[n - 1]);
    cout << " " << v[n - 1] << endl;

    return 0;
}
