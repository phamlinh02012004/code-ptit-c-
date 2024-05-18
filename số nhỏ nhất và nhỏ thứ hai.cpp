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
		for(int i = 0; i < n ; i++){
			cin >> v[i];
		}
		int check = 0;
		sort(v.begin(), v.end());
		for(int i = 0 ; i < n - 1;i++){
			if(v[i] != v[i+ 1] )
			check = 1;
		}
		if(check == 1) cout << v[0] << " " << v[1];
		else cout << "-1";
		cout << endl;
	}
}
