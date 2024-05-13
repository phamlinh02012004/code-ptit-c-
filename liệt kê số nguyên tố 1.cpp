#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}
int main(){
	int a, b;
	
	cin >> a >> b;
	if(a > b) swap(a,b);
	for(int i = a; i <= b ; i++){
		if(check(i)) cout << i << " " ;
	}
}
