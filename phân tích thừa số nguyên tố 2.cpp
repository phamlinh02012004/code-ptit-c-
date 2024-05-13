#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void check(int n){
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0){
			int mu = 0;
			while(n % i == 0){
				n /= i;
				mu++;
			}
			cout << i << " " << mu << endl;
		}
	}
		if(n != 1 ) cout << n << " 1";
}
int main(){
	int n;
	cin >> n;
	check(n);
}
