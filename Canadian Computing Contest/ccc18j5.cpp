#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int edge; cin >> edge;
    vector<int> empty;
    vector<int> d (edge + 1);
    vector<bool> visited (edge + 1);
    vector<vector<int>> adj (edge+1, empty);
    for (int i = 0; i < edge; i++){
        int amt; cin >> amt;
        for (int j = 0; j < amt; j++){
            int hello; cin >> hello; adj[i+1].push_back(hello);
        }
    }
    queue<int> q;
    q.push(1);
    fill(d.begin(), d.end(), 100000);
    d[1] = 0;
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (int a : adj[cur]){
            if (!visited[a]){
                visited[a] = true;
                d[a] = min(d[a], d[cur]+1);
                q.push(a);
            }
        }
    }
    int shortestPath = 100000;
    bool unfound = false;
    for (int i = 1; i <= edge; i++){
        if (d[i] == 100000){
            unfound = true;
        }
        if (adj[i].empty() && d[i] < shortestPath){
            shortestPath = d[i];
        }
    }
    if (unfound){
        cout << "N" << '\n';
    }
    else{
        cout << "Y" << '\n';
    }
    cout << shortestPath+1;
}
