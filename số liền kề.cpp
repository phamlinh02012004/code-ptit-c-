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
		int check  = 0;
		cin >> s;
		for(int i = 0 ; i < s.size() - 1; i++){
			if(abs((s[i + 1] - '0') - (s[i] - '0')) != 1){
				cout << "NO" << endl;
				check = 1;
				break;	
			}
			 
		}
		if(check == 0) cout << "YES" << endl;
	}
}
