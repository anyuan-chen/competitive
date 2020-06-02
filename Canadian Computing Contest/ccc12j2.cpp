#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    char arr [7] = {'I', 'O', 'S', 'H', 'Z','X','N'};
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++){
        bool contained = false;
        for (int j = 0; j < 7; j++){
            if (arr[j] == s[i]){
                contained = true;
            }
        }
        if (!contained){
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}
