#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        
        if(A <= C && B <= D){
            cout << "POSSIBLE" << endl;
        }else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}
