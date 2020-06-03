#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

string arr [26][26];
bool visited [26][26];
int main() {
    pii directions [] = {{0,1}, {0, -1}, {1,0}, {-1,0}};
    int amt, row,col;
    cin >> amt >> row >> col;
    for (int i = 0; i < row; i++){
        string s; cin >> s;
        for (int j = 0; j < col; j++){
            arr [i][j] = s[j];
            visited[i][j] = false;
        }
    }
    vector<int> sizes;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j] == "." && !visited[i][j]){
                queue<pii> q;
                q.push({i,j});
                visited[i][j] = true;
                int size = 0;
                while (!q.empty()){
                    size++;
                    pii cur = q.front();
                    q.pop();
                    for (pii d:directions){
                        if (cur.first + d.first > -1 && cur.first + d.first < 25 && cur.second+d.second > -1 && cur.second+d.second < 25 && arr[cur.first + d.first][cur.second+d.second] == "." && !visited[cur.first + d.first][cur.second+d.second]){
                            visited[cur.first + d.first][cur.second+d.second] = true;
                            q.push({cur.first + d.first,cur.second+d.second });
                        }
                    }
                }
                sizes.push_back(size);
            }
        }
    }
    sort(sizes.begin(), sizes.end());
    reverse(sizes.begin(), sizes.end());
    int rm = 0;
    int cur = 0;
    while (amt - sizes[cur] >= 0 && cur < sizes.size()){
        rm++;
        amt -= sizes[cur];
        cur++;
    }
    if (rm != 1){
        cout << rm << " rooms, " << amt << " square metre(s) left over";
    }
    if (rm == 1){
        cout << rm << " room, " << amt << " square metre(s) left over";
    }
}
