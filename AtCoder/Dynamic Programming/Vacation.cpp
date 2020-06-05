#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int inf = 1e6;

int main() {
    int days; cin >> days;
    int dp [3][days];
    int val [3][days];
    for (int i = 0; i < days; i++){
        for (int j = 0; j < 3; j++){
            cin >> val[j][i];
            if (i == 0){
                dp[j][i] = val[j][i];
            }
        }
    }
    for (int i = 1; i < days; i++){
        for (int j = 0; j < 3; j++){
            int maxPrev = -1000000;
            for (int a = 0; a < 3; a++){
                if (a!=j){
                    maxPrev = max(maxPrev, dp[a][i-1]);
                }
            }
            dp[j][i] = maxPrev + val[j][i];
        }
    }
    cout << max(dp[0][days-1], max(dp[1][days-1], dp[2][days-1]));
    return 0;
}
