#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 1; i <= n; i++){
    	sum += 1.0 / i;
	}
	cout << fixed <<setprecision(4) << (double)sum ;
}
