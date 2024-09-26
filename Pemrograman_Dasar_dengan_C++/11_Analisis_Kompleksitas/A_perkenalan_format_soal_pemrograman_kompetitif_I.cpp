#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int jml = 0;
    vector<int> data;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        data.push_back(x);
        jml += x;
    }
    
    
    for(int b : data){
        cout << jml-b << endl;
    }
}