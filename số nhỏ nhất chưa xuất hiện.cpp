#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		set<int> s;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > 0) // Only consider positive integers
				s.insert(a[i]);
		}
		int missing = 1; // Start from 1
		while(s.find(missing) != s.end()) // While missing is in the set
			missing++; // Increment missing
		cout << missing << "\n";
	}
	return 0;
}
