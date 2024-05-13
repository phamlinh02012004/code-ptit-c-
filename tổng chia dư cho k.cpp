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
		long long a, b;
		cin >> a >> b;
		long long ans = 0;
		for(int i = 1; i <= a; i++){
			ans += i % b;
		}
		if (ans == b) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
