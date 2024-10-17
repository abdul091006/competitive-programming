#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int x; cin >> x;
    
    for(int i = 0; i < x; i++){
        double N, X;
        cin >> N >> X;
        
        cout << ceil(N / 6) * X << endl;
    }
}
