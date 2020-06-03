#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int main() {
    int n; cin >> n;
    vector<pii> freq (1001);
    for (int i = 0; i < 1001; i++){
        freq[i] = {0, i};
    }
    for (int i = 0; i < n; i++){
        int a; cin >> a; freq[a].first++;
    }
    sort(freq.begin(), freq.end());
    reverse(freq.begin(), freq.end());
    vector<int> largest;
    vector<int> secondLargest;
    int onelg = freq[0].first;
    int curIndex = 0;
    while (curIndex < freq.size()){
        if (onelg == freq[curIndex].first){
            largest.push_back(freq[curIndex].second);
            curIndex++;
        }
        else{
            break;
        }
    }
    if (largest.size() > 1){
        sort(largest.begin(), largest.end());
        cout << abs(largest[largest.size()-1] - largest[0]);
        exit(0);
    }
    else{
        int twolg = freq[curIndex].first;
        while (curIndex < freq.size()){
            if (twolg == freq[curIndex].first){
                secondLargest.push_back(freq[curIndex].second);
                curIndex++;
            }
            else{
                break;
            }
        }
        sort(largest.begin(), largest.end());
        cout << max(abs(largest[0] - secondLargest[0]),abs(largest[0] - secondLargest[secondLargest.size()-1]));
    }
}
