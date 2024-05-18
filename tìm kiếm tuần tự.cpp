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
		int n , k;
		int check = 0;
		cin >> n >> k;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		for(int i = 0; i < n ; i++){
			if(v[i] == k){
			
				cout <<  i + 1 << endl;	
				check = 1;
				break;
			}
		}
			if(check == 0) cout << "-1" << endl;
			
		}
	}

