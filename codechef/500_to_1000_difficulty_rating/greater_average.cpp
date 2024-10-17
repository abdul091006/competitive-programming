#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        double A, B, C;
        cin >> A >> B >> C;
        
        if(C < (A + B) / 2){
            cout << "YES" << endl; 
        }else{
           cout << "NO" << endl;  
        } 
    }
}
