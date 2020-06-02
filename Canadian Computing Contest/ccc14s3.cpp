
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int number; cin >> number;
    for (int i = 0; i < number; i++){
        int numberCases; cin >> numberCases;
        stack<int> up;
        stack<int> side;
        for (int j = 0; j < numberCases; j++){
            int ab; cin >> ab; up.push(ab);
        }
        int nextNumber = 1;
        while (true){
            if (nextNumber == numberCases){
                cout << "Y" << endl;
                break;
            }
            else if (!up.empty() && up.top() == nextNumber){
                up.pop();
                nextNumber++;
            }
            else if (!side.empty() && side.top() == nextNumber){
                side.pop();
                nextNumber++;
            }
            else if (!up.empty()){
                side.push(up.top());
                up.pop();
            }
            else{
                cout << "N" << endl;
                break;
            }
        }
    }
    return 0;
}
