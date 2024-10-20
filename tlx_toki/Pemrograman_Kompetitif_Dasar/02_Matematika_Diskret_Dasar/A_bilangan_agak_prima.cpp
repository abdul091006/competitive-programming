#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; cin >> T;

    for(int i = 0; i < T; i++){
        int N; cin >> N;

        int divisor_count = 0;
        for(int i = 1; i <= sqrt(N); i++){
            if(N % i == 0){
                divisor_count++;
                if(i != N/i){
                    divisor_count++;
                }
            }
        }

        if(divisor_count <= 4){
            cout << "YA" << endl;
        }else{
            cout << "BUKAN" << endl;
        }
    }
}