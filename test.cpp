#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> se;
    for(int i = 0; i < n; i++){
    	cin >> v[i];
    	se.insert(v[i]);
	}
		for(int x : se){
			cout << x << " ";
		}
	}