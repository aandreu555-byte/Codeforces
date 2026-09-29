#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int min = n;
        int aux = 0;
        for(int i = 0; i < 3; i++){
            cin >> aux;
            if(aux < min) min = aux;
        }

        cout << n - min << endl;
    }
}