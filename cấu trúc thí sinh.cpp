#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct ThiSinh{
	string ten;
	string ns;
	float diem1, diem2, diem3;
};

void nhap(ThiSinh &a){
	getline(cin,a.ten);
	getline(cin,a.ns);
	cin >> a.diem1 >> a.diem2 >> a.diem3 ;
}
void in(ThiSinh a){
	cout << a.ten << " " << a.ns<<  " " << fixed << setprecision(1) << a.diem1  + a.diem2 + a.diem3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
