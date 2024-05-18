#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	
int n;
cin >> n;
int vitri;
cin >> vitri;

int a[n];
for(int i = 0; i < n; i++){
	
	cin >>  a[i];
}



for(int j = vitri ; j < n; j ++){
	cout << a[j] << " ";
}
for(int j = 0; j < vitri ; j++){
	cout << a[j] << " ";
}
cout << endl;
}

}

