#include <iostream>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;
    
    int matrix1[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int x;
            cin >> x;
            matrix1[i][j] = x;
        }
    }

    int matrix2[M][P];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < P; j++){
            int x;
            cin >> x;
            matrix2[i][j] = x;
        }
    }

    int result[N][P];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            result[i][j] = 0;
            for(int k = 0; k < M; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}