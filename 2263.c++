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

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int unos = 0;
        int ceros = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == 1){
                unos++;
            } else {
                ceros++;
            }
        }

        if(unos > ceros) cout << "Bessie" << endl;
        else if(unos == ceros) cout << "Bessie" << endl;
        else cout << "Elsie" << endl;
    }
}