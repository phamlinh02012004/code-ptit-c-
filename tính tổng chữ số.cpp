#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		int tong = 0;
		while(true){
			for(int i = 0; i < n.size(); i++){
				tong += n[i] - '0';
			}
			if(tong / 10 == 0){
				break;
			}
			else {
				n = to_string(tong);
				tong = 0;
			}
		}
		cout << tong << endl;
	}
}