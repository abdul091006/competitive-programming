#include <iostream>
#include <cmath>
using namespace std;

bool check(int x) {
        if(x <= 1){
            return false;
        }

        for(int i = 2; i <= sqrt(x); i++){
            if(x % i == 0){
                return false;
            }
        }
        return true;
}

int main() {
    int N;
    cin >> N;

    for(int j = 0; j < N; j++){
        int x;
        cin >> x;
        if(check(x)){
            cout << "YA" << endl;
        }else{
            cout << "BUKAN" << endl;
        }
    }
}
