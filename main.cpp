#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pii;
#define F first
#define S second 
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for(int i=(int)a;i<=(int)b;i++)

vector<vi> matrix;
bool isValidPoint(const vector<vi>& matrix, int x, int y) {
    return (x >= 0 && x < (int)matrix.size()) && ( y>=0 && y<(int)matrix[0].size());
}
#include "bfs.cpp"
#include "dfs.cpp"


void readInput() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,M;
    cin>>N>>M;
    int n = N;
    while (n--){
        int m = M;
        vi row;
        while(m--) {
            int t;
            cin>>t;
            row.PB(t);
        }
        matrix.PB(row);
    }
}

int main() {
    /*
    3 3 
    1 0 0
    0 0 0
    0 0 1
    */
    readInput();
    auto ret = dfs(matrix, MP(0,0), MP(4,4));
    cout << ret;
    return 0;
}