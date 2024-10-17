#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        if(X * Y / 2 < Z){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
