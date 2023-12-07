#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector < vector<int> > g; // граф
int n; // число вершин
int s;

int main(){
    queue <int> q;
    q.push(s);
    vector <bool> used(n);
    vector <int> d(n), p(n);
    used[s] = true;
    p[s] = -1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i=0; i<g[v].size(); ++i){
            int to = g[v][i];
            if(!used[to]){
                used[to] = true;
                q.push(to);
                d[to] = d[v] + 1;
                p[to] = v;
            }
        }
    }


}