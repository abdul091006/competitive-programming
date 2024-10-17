#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        int X; cin >> X;
        
        if(10 - X >= 3){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
