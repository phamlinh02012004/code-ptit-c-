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
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for(int i = 0 ; i < n ;i ++){
			cin >> v[i];
		}
		sort(v.begin(), v.end(), greater<int>());
		for(int i = 0; i <= k - 1; i++){
		
		cout << v[i] << " ";}
	cout << endl;
	}
	
}
