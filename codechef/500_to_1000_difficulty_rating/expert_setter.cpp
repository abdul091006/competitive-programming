#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	
	for(int i = 0; i < T; i++){
	    double X, Y;
	    cin >> X >> Y;
	    
	    if(Y >= X/2){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
}
