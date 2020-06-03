#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
    int amt; cin >> amt;
    int arr [amt];
    for (int i = 0; i < amt; i++){
        cin >> arr[i];
    }
    int psa[amt];
    psa[0] = arr[0];
    for (int i = 1; i < amt; i++){
        psa[i] = psa[i-1] + arr[i];
    }
    int query; cin >> query;
    for (int i = 0; i < query; i++){
        int a,b; cin >> a >> b;
        cout << psa[b]-psa[a]+arr[a] << endl;
    }
}
