#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int number; cin >> number;
    string arr1 [number];
    for (int i = 0; i < number; i++){
        cin >> arr1[i];
    }
    int correct = 0;
    for (int j = 0; j < number; j++){
        string cur; cin >> cur;
        if (cur == arr1[j]){
            correct++;
        }
    }
    cout << correct << endl;
}
