#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a , b;
		cin >> a >> b;
		long long s = ((a/b)*((b-1)*b/2)) + ((a%b)*(a%b+1)/2);
		cout << s << endl;
	}
}
