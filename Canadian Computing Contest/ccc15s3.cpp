set<int> gt;
int gates, plane; cin >> gates >> plane;
for (int i = 1; i <= gates; i++){
gt.insert(-i);
}
for (int i = 0; i < plane; i++){
int cur; cin >> cur;
if (gt.lower_bound(-cur) == gt.end()){
cout << i;
exit(0);
}
gt.erase(gt.lower_bound(-cur));
}
cout << plane;


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    set<int> gt;
    int gates, plane; cin >> gates >> plane;
    for (int i = 1; i <= gates; i++){
        gt.insert(-i);
    }
    for (int i = 0; i < plane; i++){
        int cur; cin >> cur;
        if (gt.lower_bound(-cur) == gt.end()){
            cout << i;
            exit(0);
        }
        gt.erase(gt.lower_bound(-cur));
    }
    cout << plane;

}
