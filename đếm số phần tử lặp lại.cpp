#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		vector<int> A(N);
		for(int i = 0 ; i < N; i++){
			cin >> A[i];
		}
		sort(A.begin(), A.end());
		int count = 0;
		for(int i = 0; i < N-1; i++){
			if (A[i] == A[i+1]) {
				count++;
				while(A[i] == A[i+1]) i++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
