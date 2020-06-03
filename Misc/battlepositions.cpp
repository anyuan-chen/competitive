#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int numberStation, minTroop, numberWave; cin >> numberStation >> minTroop >> numberWave;
    vector<int> diff (numberStation+2);
    fill(diff.begin(), diff.end(), 0);
    for (int i = 0; i < numberWave; i++){
        int st,ed,amt; cin >> st >> ed >> amt;
        diff[st] += amt;
        diff[ed+1] -= amt;
    }
    int norm [numberStation+1];
    int total = 0;
    norm[0] =0;
    for (int i = 1; i <= numberStation; i++){
        norm[i] = norm[i-1] + diff [i];
        if (norm[i] < minTroop){
            total++;
        }
    }
//    for (int i : norm){
//        cout << i << " ";
//    }
    cout << total;
}

