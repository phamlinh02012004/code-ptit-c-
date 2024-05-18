#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void arraySoft(int i[]){
	
}

int main() {
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	long long a[n];
    	for(int i = 0; i < n; i++){
    		cin  >> a[i];
		}
		int count_0 = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != 0){
				
			
			cout << a[i] << " " ;
			}
			if(a[i] == 0){
				count_0++;
			}
		}
		while (count_0--){
		cout << "0" << " " ;
		}
		cout << endl;
	}
}