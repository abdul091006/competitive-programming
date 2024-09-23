#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int c_terbaik = N;
    int r_terbaik = 1;
    
    for(int r = 1; r <= N; r++){
        if (N % r == 0){
            int c = N / r;
            if (r <= c){
                if ((c-r) < (c_terbaik - r_terbaik)){
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        } 
    }
    
    cout << r_terbaik << " " << c_terbaik << endl;
}
