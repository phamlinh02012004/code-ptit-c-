 #include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void check(int a[], int n){
	int i,j,tmp, min;
	for(i = 0; i < n; i++){
		min = i;
		for(j = i +1 ; j < n; j++){
			if(a[j] < a[min] ){
				min = j;
			}
		}
		tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
	}
}
void in(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}


int main() {
    int t;
    cin >> t;
    while(t--){
    	int a, b;
    	cin >> a >> b;
    	int m[a], n[b];
    	for(int i = 0; i < a; i++){
    		cin >> m[i];
		}
		for(int i = 0; i < b; i++){
			cin >> n[i];
		}
		
		int size1 = sizeof m, length1 = sizeof m / sizeof(int);
		int size2 = sizeof n, length2 = sizeof n / sizeof(int);
		int result[length1+length2];
		
		memcpy(result,m,size1);
		memcpy(&result[length1], n, size2);
		
			check(result, length1+length2);
			in(result, length1+length2);
		cout << endl;	
		}
		
		
		
	}
