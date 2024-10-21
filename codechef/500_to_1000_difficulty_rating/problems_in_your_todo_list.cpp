#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	
	for(int i = 0; i < T; i++){
	    int N; cin >> N;
	    int count = 0;
	    for(int j = 0; j < N; j++){
	        int D[N]; cin >> D[j];
	        if(D[j] >= 1000){
	            count++;
	        }
	    }
	    cout << count << endl;
	}
}
