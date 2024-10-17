#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    if(a.size() < 1 || a.size() > 1000 || b.size() < 1 || b.size() > 1000){
        return 1;
    }

    if (a.size() != b.size() + 1) {
        cout << "Wah, tidak bisa :(" << endl;
        return 0;
    }

    int perbedaan = 0;
    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < 'a' || a[i] > 'z' || b[j] < 'a' || b[j] > 'z') {
            return 1;
        }

        if (a[i] != b[j]) {
            perbedaan++;
            i++;  
        } else {
            i++;
            j++;
        }
    }

    if(perbedaan > 1){
        cout << "Wah, tidak bisa :(" << endl;
    }else {
        cout << "Tentu saja bisa!" << endl;
    }
}