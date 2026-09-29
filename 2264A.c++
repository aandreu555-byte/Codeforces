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

        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];

        vector<int> e;
        vector<int> pos;
        for(int i = 0; i < n; i++){
            if(p[i] != i + 1){
                e.push_back(p[i]);
                pos.push_back(i + 1);
            }
        }

        reverse(pos.begin(), pos.end());

        if(pos == e) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}