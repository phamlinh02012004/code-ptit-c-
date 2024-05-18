#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
	int tong(string s){
		int tong = 0;
		for(int i = 0 ; i < s.size(); i++){
			tong += s[i] - '0';
		}
		return tong;
	}
int main(){
	int m, s;
	cin >> m >> s;
	string min = "";
	string max = "";
	
	for(int i = pow(10,m-1); i < pow(10,m); i++){
		string bosua = to_string(i);
		if(tong(bosua) ==  s){
			if(min == "" || min > bosua) min = bosua;
			if(max == "" || max < bosua) max = bosua;
		}
		
	}
	cout << min << " " << max;
}
