#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    int problems = 0;
    while(t--){
        int a = 0;
        int b = 0;
        for(int i = 0; i < 3; i++) {
            cin >> a;
            if(a == 1) b++;
        }
        if(b >= 2) problems++;
    }

    cout << problems << endl;

    return 0;
}
