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
		int a[n];
		for(int i = 0 ; i < n; i ++){
			cin >> a[i];
			}
			for(int i =0 ; i < n; i++){
				for(int j = 0 ; j < n; j++){
					if(a[i] == j){
						cout << j;
					}
					else cout << "-1"; 
				}
			}
		}
	}
