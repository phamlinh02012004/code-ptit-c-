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
		int a[n - 1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0 ; i < n - 1;i++){
			if(a[i + 1] - a[i] != 1){
				cout << a[i+1] - 1;
				break;
			}
		}
	}
}
