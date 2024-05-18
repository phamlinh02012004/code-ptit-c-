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
	
		vector<int> v;
		int num;
		while(cin >> num){
			v.push_back(num); 
			if(cin.get() == '\n') break;
		}
		int chan = 0, le = 0;
		for(int i = 0; i < v.size(); i++){
			if(v[i] % 2 == 0) chan++;
			else le++;
		}
	if(v.size() % 2 == 0 && chan > le || v.size() % 2 != 0 && le > chan){
		cout << "YES" << endl;
		
	}
	else cout << "NO" << endl;
	}
}
