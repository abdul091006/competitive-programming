#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        if (c == 'z'){
            c = 'A';
        } else {
            c = toupper(c)+1;
        }
        cout << c;
    }
    cout << endl;
}
