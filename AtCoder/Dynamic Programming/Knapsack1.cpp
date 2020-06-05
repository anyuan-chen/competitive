#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int inf = 1e6;

int main() {
    int item, weight; cin >> item >> weight;
    vector<ll> dp (weight+1, 0);
    for (int i = 0; i < item; i++){
        ll w, v; cin >> w >> v;
        for (ll j = weight; j - w >= 0; j--){
            dp[j] = max(dp[j], dp [j-w] + v);
        }
    }
    cout << dp [weight];
    return 0;
}
