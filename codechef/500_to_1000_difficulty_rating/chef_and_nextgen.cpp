#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;
        
        if(A*B <= X*Y){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}
