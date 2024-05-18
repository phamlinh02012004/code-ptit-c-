#include <iostream>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

void nhap(PhanSo &p) {
    cin >> p.tu >> p.mau;
}

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b,a%b);
}
PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo t;
    t.tu = p.tu * q.mau + p.mau * q.tu;
    t.mau = p.mau * q.mau;
    long long ucln = gcd(t.tu, t.mau);
    t.tu /= ucln;
    t.mau /= ucln;
    return t;
}

void in(PhanSo p) {
    cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
