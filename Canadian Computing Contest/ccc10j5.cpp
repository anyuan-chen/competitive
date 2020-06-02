#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

bool visited [8][8];
int d [8][8];
int main() {
    vector<vector<int>> directions = {{1,2}, {2,1}, {-1,2}, {-1,-2}, {1, -2}, {-2,-1}, {-2,1}, {1,-2}};
    int sx, sy; cin >> sx >> sy; sx--; sy--;
    int ex, ey; cin >> ex >> ey; ex--; ey--;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            d[i][j] = 1000000;
        }
    }
    queue<pii> q;
    q.push({sx,sy});
    d[sx][sy] = 0;
    while (!q.empty()){
        pii cur = q.front();
        q.pop();
        for (vector<int> a: directions){
            int cx = cur.first + a[0];
            int cy = cur.second + a[1];
            if (cx > -1 && cy > -1 && cx < 8 && cy < 8 && !visited[cx][cy]){
                visited[cx][cy] = true;
                q.push({cx,cy});
                d[cx][cy] = min(d[cx][cy],d[cur.first][cur.second] + 1);
            }
        }
    }
    cout << d[ex][ey];
}
