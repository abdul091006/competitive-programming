#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N, M, X;

vector<vector<int>> horizontal(const vector<vector<int>>& x) {
    vector<vector<int>> matrix(N, vector<int>(M));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrix[i][j] = x[N-1-i][j];
        }
    }

    return matrix;
}

vector<vector<int>> vertikal(const vector<vector<int>>& x) {
    vector<vector<int>> matrix(N, vector<int>(M));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrix[i][j] = x[i][M-1-j];
        }
    }

    return matrix;
}

vector<vector<int>> rotasi90(const vector<vector<int>>& x) {
    vector<vector<int>> matrix(M, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrix[j][N-1-i] = x[i][j];
        }
    }

    return matrix;
}

vector<vector<int>> rotasi180(const vector<vector<int>>& x) {
    vector<vector<int>> matrix(N, vector<int>(M));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrix[i][j] = x[N-1-i][M-1-j];
        }
    }

    return matrix;
}

vector<vector<int>> rotasi270(const vector<vector<int>>& x) {
    vector<vector<int>> matrix(M, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrix[M-1-j][i] = x[i][j];
        }
    }

    return matrix;
}

int main() {
    cin >> N >> M >> X;
    
    vector<vector<int>> matrix(N, vector<int>(M));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> matrix[i][j];
        }
    }

    string operasi;
    vector<vector<int>> result = matrix; 

    for (int i = 0; i < X; i++) {
        cin >> operasi;

        if (operasi == "_") {
            result = horizontal(result);
        } 
        if (operasi == "|") {
            result = vertikal(result);
        }

        if (operasi == "90") {
            result = rotasi90(result);
            swap(N, M);
        } 
        if (operasi == "180") {
            result = rotasi180(result);
        } 
        if (operasi == "270") {
            result = rotasi270(result);
            swap(N, M);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
