#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	long long fibo[100];
	fibo[1] = 1;
	fibo[2] = 1;
	for(int i = 3; i <= 92; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	int t;
	cin >> t;
	while(t--){
	
	int n ;
	cin >> n;
	
		cout << fibo[n] << endl;
	}
}

