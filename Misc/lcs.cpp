#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int dp [1001][1001];
int main() {
    int l,w; cin >> l >> w;
    int arr1 [l+1];
    int arr2 [w+1];
    for (int i = 1; i <= l; i++){
        cin >> arr1[i];
    }
    for (int i = 1; i <= w; i++){
        cin >> arr2[i];
    }
    for (int i = 0; i <= l; i++){
        for (int j = 0; j <= w; j++){
            if (i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if (arr1[i] != arr2[j]){
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j-1] + 1;
            }
        }
    }
    cout << dp[l][w];
}
