#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int n; cin >> n;
    vector<int> h (n);
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }
    vector<int> minimum (n);
    minimum[0] = 0;
    minimum[1] = h[1] - h[0];
    for (int i = 2; i < n; i++){
        minimum[i] = min(minimum[i - 2] + abs(h[i] - h[i - 2]), minimum[i - 1] + abs(h[i] - h[i - 1]));
    }
    cout << minimum[n-1];
}

