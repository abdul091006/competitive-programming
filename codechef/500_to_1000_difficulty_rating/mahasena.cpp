#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	
	int A[N];
	int total_genap = 0;
	
	for(int i = 0; i < N; i++){
	    cin >> A[i];
	    if(A[i] % 2 == 0){
	        total_genap++;
	    }
	}
	
	if(total_genap > N / 2){
	    cout << "READY FOR BATTLE" << endl;
	}else {
	    cout << "NOT READY" << endl;
	}
}
