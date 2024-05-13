#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
		cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
    	string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		cout << v.size() << endl;
	}
}
