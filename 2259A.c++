#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int respuesta = 0;

        for(int i = 0; i < n; i++){
            bool granja = true;
            int cont = 0;
            
            for(int j = 0; j < k; j++){
                if(s[i + j] == '0') {
                    granja = false;
                    break;
                }
            }

            if(granja == true) respuesta++;
            i += k - 1;
        }

        cout << respuesta << endl;
    }
    return 0;
}