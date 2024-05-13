#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, m;
        int ans = -1;
        cin >> a >> m;
        for(int i = 0 ; i <  m; i++){
            if (i * a % m == 1) {
                ans  = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
