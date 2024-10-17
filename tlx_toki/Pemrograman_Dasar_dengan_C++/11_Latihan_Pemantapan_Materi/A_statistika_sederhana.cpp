#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int terbesar;
    int terkecil;
    vector<int> data;

    if (N <= 100){
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if(x >= -100000 && x <= 100000){
                data.push_back(x);

                if(i == 0){
                    terkecil = data[i];
                    terbesar = data[i];
                }
                if(data[i] > terbesar){
                    terbesar = data[i];
                }

                if(data[i] < terkecil){
                    terkecil = data[i];
                }
            }

        }
    }
    
    cout << terbesar << " " << terkecil << endl;
}