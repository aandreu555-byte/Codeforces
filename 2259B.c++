#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int impares = 0, pares0 = 0, pares2 = 0;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x % 2 != 0) impares++;
            else if (x % 4 == 0) pares0++;
            else pares2++;
        }

        int respuesta = max(impares, max(pares0, pares2)); 
        cout << respuesta << endl;
    }
    return 0;
}