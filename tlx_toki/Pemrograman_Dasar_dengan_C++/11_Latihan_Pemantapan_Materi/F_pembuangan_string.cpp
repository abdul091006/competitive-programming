#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, substr;
    cin >> str >> substr;

    size_t x;
    while ((x = str.find(substr)) != string::npos) {
        str.erase(x, substr.size());
    }

    cout << str << endl;
}
