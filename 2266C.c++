#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n;
        int ans = 0;
        cin >> n;

        string s;
        cin >> s;

        if(s[0] == '1'){
            for(int i = 1; i < n; i++){
                if(s[i] == '0') ans++;
            }
        } else {
            vector<int> pref(n + 1, 0);
            vector<int> suf(n + 1, 0);

            for (int i = 0; i < n; i++) {
                pref[i + 1] = pref[i] + (s[i] == '1');
            }

            for (int i = n - 1; i >= 0; i--) {
                suf[i] = suf[i + 1] + (s[i] == '0');
            }

            ans = n;
            for (int i = 0; i <= n; i++) {
                ans = min(ans, pref[i] + suf[i]);
            }
        }
        cout << ans << endl;
    }
}