#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> freq(101, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int impresos = 0;

        while (impresos < n) {
            for (int i = 100; i >= 1; i--) {
                if (freq[i] > 0) {
                    cout << i << " ";
                    freq[i]--;
                    impresos++;
                }
            }
        }

        cout << '\n';
    }

    return 0;
}