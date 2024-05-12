#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
bool check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false; 
	}
	return n > 1;
}
using namespace std;
int main(){
	int n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
}
