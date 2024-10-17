#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        int X; cin >> X;
        if(X > 5000){
            cout << X - 500 << endl;
        } else if(X > 1000) {
            cout << X - 100 << endl;
        } else if(X > 100) {
            cout << X - 25 << endl;
        } else{
            cout << X << endl;
        }
    }
}
