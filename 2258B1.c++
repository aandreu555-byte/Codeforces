#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int max_total_zanahorias = 0;

        for (int x = 1; x <= m; x++) {
            auto it1 = lower_bound(a.begin(), a.end(), x);
            int mayores_o_iguales = a.end() - it1;

            auto rango_2x = equal_range(a.begin(), a.end(), 2 * x);
            int exactamente_2x = rango_2x.second - rango_2x.first;

            int resultado_actual = mayores_o_iguales + exactamente_2x;

            if (resultado_actual > max_total_zanahorias) {
                max_total_zanahorias = resultado_actual;
            }
        }
        
        cout << max_total_zanahorias << "\n";
    }
    return 0;
}