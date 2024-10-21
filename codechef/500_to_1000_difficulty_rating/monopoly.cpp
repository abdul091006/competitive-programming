#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	
	for(int i = 0; i < T; i++){
	    int P, Q, R, S;
	    cin >> P >> Q >> R >> S;
	    
	    if(P > Q+R+S || Q > P+R+S || R > P+Q+S || S > P+Q+R){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
}
