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
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(s[i]  == '0' && s[i+ 1] == '8' && s[i + 2] == '4'){
				s.erase(s.begin() + i, s.begin() + i + 3);
			}
		}
		for(int i = 0; i < s.size(); i++){
			cout << s[i]; 
		}
		cout << endl;
	}
}
