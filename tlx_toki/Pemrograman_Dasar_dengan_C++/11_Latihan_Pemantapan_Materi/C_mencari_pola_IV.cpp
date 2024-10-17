#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if(N < 1 || N > 100){
        return 0;
    }

    int bilangan = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            cout << bilangan % 10;
            bilangan++;
        }
        cout << endl;
    }
}