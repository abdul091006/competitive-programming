#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        double N, X;
        cin >> N >> X;
        
        cout << ceil(N*X / 4) << endl;
    }
}
