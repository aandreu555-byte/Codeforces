#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        if(n > 1){
            while(a[n - 1] != 0){
                int aux = a[0] % a[n - 1];
                a[0] = a[n - 1];
                a[n - 1] = aux;
            }           
        }

        cout << a[0] << endl;
    }
}