#include <iostream>
#include <vector>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    cin.ignore();

    vector<vector<int>> container(R, vector<int>(C));

    for(int i = 0; i < R; i++){
        string row;
        getline(cin, row);
        for(int j = 0; j < C; j++){
            container[i][j] = row[j] - '0';
        }
    }
    
    // menentukan baris terbawah yang memiliki angka 1 semua
    int terbawah = R;

    for(int row = 0; row < R; row++){
        int jml1 = 0;
        int jml0 = 0;
        for(int col = 0; col < C; col++){
            if(container[row][col] == 1){
                jml1++;
            }
        }
        if(jml1 == C){
            for(int col = 0; col < C; col++){
                container[row][col] = 0;
            }
        }
        for(int col = 0; col < C; col++){
            if(container[row][col] == 0){
                jml0++;
            }
        }
        if(jml0 == C){
            terbawah = row;
        }
    }

    // menentukan jumlah angka 1 disetiap kolom dimulai dari baris terbawah
    vector<int> jml_angka_1(C, 0);
    for(int col = 0; col < C; col++){
        for(int row = 0; row < terbawah; row++){
            if(container[row][col] == 1){
                jml_angka_1[col]++;
            }
        }
    }

    // menentukan baris terbawah pada setiap kolom
    vector<int> row_terbawah(C, 0);
    for(int col = 0; col < C; col++){
        for(int row = R - 1; row >= terbawah; row--){
            if(row == terbawah && container[row][col] == 0){
                row_terbawah[col] = row;
            }
            if(container[row][col] == 1){
                row_terbawah[col] = row-1;
            }
        }
    }

    for(int col = 0; col < C; col++){
        cout << row_terbawah[col];
    }


    // menjatuhkan angka 1 yang ada diatas baris terbawah
    for(int col = 0; col < C; col++){
        for(int row = row_terbawah[col]-jml_angka_1[col]+1; row <= row_terbawah[col] ; row++){
            container[row][col] = 1;
        }
        for(int row = 0; row < row_terbawah[col]-jml_angka_1[col]+1; row++){
            container[row][col] = 0;
        }
    }
    
    cout << "===========" << endl;
    for(int row = 0; row < R; row++){
        for(int col = 0; col < C; col++){
            cout << container[row][col];
        }
        cout << endl;
    }

    return 0;
}