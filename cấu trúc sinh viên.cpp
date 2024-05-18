#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
  
    string hoTen;
    string lop;
    string ngaySinh;
    float diemGPA;
};

void nhap(SinhVien &sv){
    getline(cin, sv.hoTen);
    getline(cin, sv.lop);
    getline(cin,sv.ngaySinh);
    cin >> sv.diemGPA;
    cin.ignore();
}

void chuanHoaNgay(SinhVien &sv){
    if(sv.ngaySinh[1] == '/')
        sv.ngaySinh.insert(0,"0");
    if(sv.ngaySinh[4] == '/')
        sv.ngaySinh.insert(3,"0");
}

void in(SinhVien &sv){
	chuanHoaNgay(sv);
    cout << "B20DCCN001" << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " ";
    cout << fixed << setprecision(2) << sv.diemGPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
