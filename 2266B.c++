#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        vector<int> a(3);
        for(int i = 0; i < 3; i++) cin >> a[i];

        if(abs(a[1] - a[0]) > abs(a[1] - (a[0] + a[2]))){
            cout << abs(a[1] - a[0]) << endl;
        } else {
            cout << abs(a[1] - (a[0] + a[2])) << endl;
        }
    }
}