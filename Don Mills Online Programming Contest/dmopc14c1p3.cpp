#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;


int main() {
    double initial; cin >> initial;
    long double sum = 0;
    int amtStudent = initial;
    for (int i = 0; i < initial; i++){
        double b; cin >> b; sum += b;
    }
    int transfer; cin >> transfer;
    for (int i = 0; i < transfer; i++){
        double b; cin >> b; sum += b;
        amtStudent++;
        cout << setprecision(5) << sum/amtStudent << endl;
    }
}
