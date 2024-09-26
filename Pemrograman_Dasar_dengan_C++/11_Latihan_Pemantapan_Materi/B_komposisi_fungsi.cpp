#include <iostream>
using namespace std;

int f(int x, int A, int B) {
    return abs(A * x + B);
}

int multiple(int A, int B, int K, int x) {
    for (int i = 0; i < K; i++) {
        x = f(x, A, B); 
    }
    return x;
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;
    
    int result; 

    if (A <= 5 && B <= 5 && x <= 5 && A >= -5 && B >= -5 && x >= -5 && K >= 1 && K <= 5) {
        result = multiple(A, B, K, x); 
    } 

    cout << result << endl;
}
