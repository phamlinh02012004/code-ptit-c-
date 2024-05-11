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
		int check  = 0;
		for(int i = 0 ; i < s.size(); i++){
			if(s[i] != '0' && s[i] != '6' && s[i] != '8'){
				check = 1;
			}
		}
		if(check == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
