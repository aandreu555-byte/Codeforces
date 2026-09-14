#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;

        int pA = 0, iA = 0;
        int pB = 0, iB = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == '1') {
                if(i % 2 == 0) pA++;
                else iA++;
            }
            if(b[i] == '1') {
                if(i % 2 == 0) pB++;
                else iB++;
            }
        }

        if(pA == pB && iA == iB)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
