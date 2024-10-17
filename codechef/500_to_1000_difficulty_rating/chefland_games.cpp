#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	
	for(int i = 0; i < T; i++){
	    int R[4];
	    int total_referees = 0;
	    
	    for(int j = 0; j < 4; j++){
	        cin >> R[j];
	        if(R[j] == 1){
	            total_referees++;
	        }
	    }
	    
	    if(total_referees >= 1){
	        cout << "OUT" << endl;
	    }else{
	        cout << "IN" << endl;
	    }
	}
}
