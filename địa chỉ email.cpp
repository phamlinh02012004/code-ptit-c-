#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string s;
	getline(cin , s);
	for(char &x : s) x = tolower(x);
	stringstream ss(s);
	vector<string> v;
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}

	string email = v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; i++){
		email += v[i][0];
	}
	cout << email << "@ptit.edu.vn";
}
