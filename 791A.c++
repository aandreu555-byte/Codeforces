#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    float a, b, total = 0;
    cin >> a >> b;

    while(a < b){
        a *= 1.5;
        total++;
    }

    cout << total << endl;

    return 0;
}