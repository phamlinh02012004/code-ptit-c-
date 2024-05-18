#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long a, b;
};

void nhap(PhanSo &n){
	cin >> n.a >> n.b;
}

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b,a%b);
}

void rutgon(PhanSo &n){
	long long ucln = gcd(n.a, n.b);
	n.a /= ucln;
	n.b /= ucln;
}

void in(PhanSo &n){
	cout << n.a << "/" << n.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}