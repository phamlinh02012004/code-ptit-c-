#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int demdong = 0;
    for(int i = pow(10,n-1); i < pow(10,n); i++){
        string s = to_string(i);
        int demchan = 0, demle = 0;
        for(int v = 0; v < s.size(); v++){
            if((s[v] - '0') % 2 == 0)
                demchan ++;
            else 
                demle++;
        }
        if(demchan == demle){
            cout << i  << " ";
            demdong++;
            if(demdong % 10 == 0) cout << endl;
        }
    }
    return 0;
}
