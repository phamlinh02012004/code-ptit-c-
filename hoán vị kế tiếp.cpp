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
			for(int i = 0; i < n;i++){
				cin >> v[i];
			}
			if(next_permutation(v.begin(), v.end()))
			for(int i = 0; i < n ; i++){
				cout << v[i] <<  " ";
			}
			cout << endl;
	}
}
