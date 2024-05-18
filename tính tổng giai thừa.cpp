#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gt(int n){
	long long gt = 1;
	for(int i = 1; i <= n; i++){
		gt = gt * i;
	}
	return gt;
}
int main() {
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
    	sum += gt(i);
    	
	}
	cout << sum;
}