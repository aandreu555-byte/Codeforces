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

        int ceros = 0;
        int unos = 0;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0 && i != 0 && i != n - 1) ceros++;
        }

        if(a[0] == 1) unos++;
        if(a[n - 1] == 1) unos++;

        if(ceros < unos) cout << "-1" << endl;
        else cout << unos << endl;
    }
    return 0;
}