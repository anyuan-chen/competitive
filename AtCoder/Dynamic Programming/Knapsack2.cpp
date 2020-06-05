#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const ll inf = 1e10;

int main() {
    //dp[i] is now the minimum weight for each value
    int numberItems, totalWeight;
    cin >> numberItems >> totalWeight;

    vector<ll> dp (10001, inf);
    dp[0] = 0;
    for (int i = 0; i < numberItems; i++){
        ll w,v; cin >> w >> v;
        for (int j = 10000; j >= v; j--){
            dp[j] = min(dp[j], dp[j-v] + w);
        }
    }
    for (int i = 10000; i >= 0; i--){
        if (dp[i] <= totalWeight){
            cout << i;
            return 0;
        }
    }
}
