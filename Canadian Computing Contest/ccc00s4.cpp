#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int inf = 1e6;

int main() {
    int dist; cin >> dist;
    int amtClubs; cin >> amtClubs;
    int clubLengths [amtClubs];
    for (int i = 0; i < amtClubs; i++){
        cin >> clubLengths[i];
    }
    vector<int> dp (dist+ 1, inf);
    dp[0] = 0;
    for (int i = 0; i <= dist; i++){
        for (int j = 0; j < amtClubs; j++){
            if (i- clubLengths[j] >-1){
                dp[i] = min(dp[i], dp[i-clubLengths[j]]+1);
            }
        }
    }
    if (dp[dist] == inf){
        cout << "Roberta acknowledges defeat.";
    }
    else{
        cout << "Roberta wins in " << dp[dist] << " strokes.";
    }
}
