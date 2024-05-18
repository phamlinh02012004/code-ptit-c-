#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void convert(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] =tolower(s[i]);
	}
}
int main() {
    string s;
    getline(cin,s);
    
    convert(s);
    for(int i = 0; i < s.size(); i++){
    
    	if(s[i] != 'a'&& s[i] !='e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' ){
    		cout << "." << s[i];
    		
    		
		}
	
	}
		
	
}
