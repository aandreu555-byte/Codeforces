#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> b(m);
        for(int i = 0; i < m; i++) cin >> b[i];

        while(a[0] != 0 || b[0] != 0){
            if(b.size() > 1 && b[0] < b[1]) {
                b[0] = b[1];
                b.erase(b.begin() + 1);
            }
            b[0]--;
            if(a.size() > 1 && a[0] < a[1]) {
                a[0] = a[1];
                a.erase(a.begin() + 1);
            }
            a[0]--;
        }

        if(b[0] == 0){
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    }
    return 0;
}