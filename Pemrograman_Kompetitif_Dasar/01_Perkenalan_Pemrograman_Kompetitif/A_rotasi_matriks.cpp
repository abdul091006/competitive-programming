#include <iostream>
using namespace std;


int main() {
    int M, N;
    cin >> M >> N;

    if (N > 100 || M > 100 || N < 1 || M < 1){
        return 1;
    }

    int matrix[M][N];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];

            if(matrix[i][j] < 1 || matrix[i][j] > 100){
                return 1;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = M-1; j >= 0; j--){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
