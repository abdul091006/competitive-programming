#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    int pasangan[N][2];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++){
            cin >> pasangan[i][j];
        }
    }
    
    int terbesar = 0;
    int terkecil = INT_MAX;
    int result;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            result = pow(abs(pasangan[i][0] - pasangan[j][0]), D) +  pow(abs(pasangan[i][1] - pasangan[j][1]), D);
            terbesar = max(terbesar, result);
            terkecil = min(terkecil, result);
        }
    }
    
    cout << terkecil << " " << terbesar << endl;
}
