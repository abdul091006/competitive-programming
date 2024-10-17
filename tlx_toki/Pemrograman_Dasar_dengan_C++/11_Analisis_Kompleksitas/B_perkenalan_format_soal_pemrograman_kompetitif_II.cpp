#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    long long jml = 0;
    vector<int> data;
    
    if(N >= 1 && N <= 100){
        for (int i = 0; i < N; i++) {
            long long x;
            if(N <= 100000000){
                cin >> x;
                data.push_back(x);
                jml += x;
            }
        }
    }else{
        return 0;
    }
    
    
    for(int b : data){
        cout << jml-b << endl;
    }
}
