#include <iostream>

using namespace std;

int reverse(int x){
    int temp = x;
    int ret = 0;

    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main(){
    int a, b;
    cin >> a >> b;

    if(a < 1 || b < 1 || a > 1000000 || b > 1000000){
        return 1;
    }

    int result = reverse(a) + reverse(b);
    cout << reverse(result) << endl;
}