#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int inf = 1e6;

int main() {
    int n,q; cin >> n >> q;
    vector<int> nums (n+1);
    int total = 0;
    for (int i = 1; i <= n; i++){
        cin >> nums[i];
        total += nums[i];
    }
    for (int i = 1; i <= n; i++){
        nums[i] += nums[i-1];
    }
    for (int i = 0; i < q; i++){
        int s,e; cin >> s >> e;
        cout << total - (nums[e]-nums[s-1]) << endl;
    }
}
