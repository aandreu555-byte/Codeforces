#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int total = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k - 1] && a[i] > 0) total++;
    }

    cout << total << endl;
}

