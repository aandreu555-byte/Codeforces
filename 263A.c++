#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int total;

    vector<vector<int>> a(5, vector<int>(5));
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1) total = abs(i - 2) + abs(j - 2);
        }
    }

    cout << total << endl;
}
