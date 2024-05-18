#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
	
string s;
getline(cin, s);
int sum_chan = 0;
int sum_le = 0;
for(int i = 0; i < s.size(); i++){
	if(i % 2 == 0)
	sum_chan += s[i] - '0';
	else sum_le += s[i] - '0';
}
int chiahet = sum_le - sum_chan;
if(chiahet % 11 == 0) cout << "1"<< endl;
else cout <<"0"<< endl;
}
}

