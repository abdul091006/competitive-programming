#include <iostream>
#include <string>
using namespace std;

void gunung(int N){
    if(N == 0){
        return;
    }

    gunung(N-1);
    for(int i = 1; i <= N; i++){
        cout << "*";
    }
    cout << endl;
    gunung(N-1);
}

int main() {
    int N;
    cin >> N;

    gunung(N);
}
