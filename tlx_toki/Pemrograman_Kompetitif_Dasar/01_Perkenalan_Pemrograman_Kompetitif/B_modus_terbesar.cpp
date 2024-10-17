#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
    int M;
    cin >> M;

    if(M < 1 || M > 100000){
        return 1;
    }

    int arr[M];
    for(int i = 0; i < M; i++){
        cin >> arr[i];
        if(arr[i] < 1 || arr[i] > 1000){
            return 1;
        }
    }

    unordered_map<int, int> frekuensi;
    for(int x : arr){
        frekuensi[x]++;
    }

    int angka_terbanyak = arr[0];
    int frekuensi_terbanyak = frekuensi[angka_terbanyak];

    for(auto x : frekuensi){
        int angka = x.first;
        int banyak = x.second;

        if(banyak > frekuensi_terbanyak){
            angka_terbanyak = angka;
            frekuensi_terbanyak = banyak;
        }
        if(banyak == frekuensi_terbanyak){
            if(angka > angka_terbanyak){
                angka_terbanyak = angka;
                frekuensi_terbanyak = banyak;
            }
        }
    }

    cout << angka_terbanyak << endl;
}
