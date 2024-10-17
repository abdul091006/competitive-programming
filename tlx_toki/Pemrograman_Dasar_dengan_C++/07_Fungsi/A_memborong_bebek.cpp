#include <iostream>
using namespace std;

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int harga_bebek;

        // hitung biaya membeli bebek-bebek jantan
        if (jantan[i] < 10) {
            harga_bebek = 100000 * jantan[i];
        } else if (jantan[i] >= 10 && jantan[i] <= 50) {
            harga_bebek = 75000 * jantan[i];
        } else {
            harga_bebek = 50000 * jantan[i];
        }
        int biaya_jantan = harga_bebek;

        // hitung biaya membeli bebek-bebek betina
        if (betina[i] < 10) {
            harga_bebek = 100000 * betina[i];
        } else if (betina[i] >= 10 && betina[i] <= 50) {
            harga_bebek = 75000 * betina[i];
        } else {
            harga_bebek = 50000 * betina[i];
        }
        int biaya_betina = harga_bebek;

        // cetak total biaya
        cout << biaya_jantan + biaya_betina << endl;
    }
}
