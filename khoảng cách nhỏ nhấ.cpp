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
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		int min_diff = INT_MAX;
		sort(v.begin(), v.end()); 
		for(int i = 1 ; i < n; i++){
			min_diff = min(min_diff, v[i] - v[i - 1]);
			}
			cout << min_diff << endl;
		}
	}

