#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int inf = 1e9;

int main() {
    int n,k; cin >> n >> k;
    vector<ll> stones (n);
    for (int i = 0; i < n; i++){
        cin >> stones[i];
    }
    vector<ll> dp (n, inf);
    dp[0] = 0;
    dp[1] = abs(stones[1]-stones[0]);
    for (int i = 2; i < n; i++){
        for (int j = 1; j <= k; j++){
            if (i-j>-1){
                dp[i] = min(dp[i], dp[i-j] + abs(stones[i]-stones[i-j]));
            }
            else{
                break;
            }
        }
    }
    cout << dp[n-1];
    return 0;
}
