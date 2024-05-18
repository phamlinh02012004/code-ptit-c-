#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
	bool snt(string &s){
		for(int i = 0 ; i < s.size() ; i++){
			if (s[i] != s[s.size() - i - 1] ){
				
				return false;
			}
			
		}
		return true;
		
	}
	
	bool chan(string &s){
		for(int i = 0 ; i < s.size(); i++){
			if(s[i]  % 2 != 0)
			return false;
		}
		 return true;
	}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(snt(s) && chan(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
