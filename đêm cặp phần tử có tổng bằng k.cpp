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
		cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n; i ++){
			cin >> a[i];
		}
		int count = 0;
		for(int i = 0 ; i < n - 1; i ++){
			for(int j = i + 1; j < n; j++){
				if(a[i] + a[j] == k)
				count++;
			}
		}
		if(count > 0) cout << count << endl;
		else cout << "0" << endl;
	}
}
