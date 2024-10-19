#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    
    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        
        int coins = N*50;
        
        int sugarcane = coins*20/100;
        int salt_and_mint_leaves = coins*20/100;
        int shop_rent = coins*30/100;
        
        cout << coins - sugarcane - salt_and_mint_leaves - shop_rent << endl;
    }
}
