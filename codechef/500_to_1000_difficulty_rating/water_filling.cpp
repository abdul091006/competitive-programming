#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	
	for(int i = 0; i < T; i++){
	    int B[3];
	    int total_empty = 0;
	    
	    for(int j = 0; j < 3; j++){
	        cin >> B[j];
	        
	        if(B[j] == 0){
	            total_empty++;
	        }
	    }
	    
	    if(total_empty > 3/2){
	        cout << "Water filling time" << endl;
	    }else {
	        cout << "Not now" << endl;
	    }
	}
}
