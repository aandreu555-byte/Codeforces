#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,  total = 0;
        char c;
        cin >> n >> c;
        
        string s;
        cin >> s;

        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n - i - 1]){
                if(s[i] == c || s[n - i - 1] == c) total++;
                else total = total + 2;
            }
        }

        cout << total << endl;
    }

    return 0;
}
