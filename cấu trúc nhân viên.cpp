#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct NhanVien{
	string ten;
	string gtinh;
	string ns;
	string dc;
	string ms;
	string hd;
};
void nhap(NhanVien &a){
	getline(cin,a.ten);
	getline(cin,a.gtinh);
	getline(cin,a.ns );
	getline(cin,a.dc );
	getline(cin,a.ms );
	getline(cin,a.hd );

}

void chuanHoaNgay(NhanVien &a){
	if(a.ns[1] == '/')
	a.ns.insert(0,"0");
	if(a.ns[4] == '/')
	a.hd.insert(3,"0");
	if(a.hd[1] == '/')
	a.hd.insert(0,"0");
	if(a.hd[4] == '/')
	a.hd.insert(3,"0");
}
void in(NhanVien &a){
	chuanHoaNgay(a);
	cout << "00001" << " " << a.ten << " " << a.gtinh << " " << a.ns << " " << a.dc << " " <<a.ms <<" " << a.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
