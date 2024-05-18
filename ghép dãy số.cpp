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
		int k, n;
		cin >> k >> n;
		
		vector<int> v;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < n; j++){
				int a;
			cin >> a;
			v.push_back(a);
		}
	}
		sort(v.begin(),v.end());
			for(int i = 0; i <  v.size(); i++){
			cout << v[i] << " ";
	}
	cout << endl;
	
}
}
