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
vi data;
bool isValidPoint(const vector<vi>& matrix, int x, int y) {
    return (x >= 0 && x < (int)matrix.size()) && ( y>=0 && y<(int)matrix[0].size());
}
#include "bfs.cpp"
#include "dfs.cpp"
#include "binary_search.cpp"
#include "backtrack.cpp"
#include "permutation.cpp"
#include "combination.cpp"

void readInput() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,M;
    cin>>N>>M;
    int n = N;
    while (n--){
        int m = M;
        while(m--) {
            int t;
            cin>>t;
            data.PB(t);
        }
    }
}

int main() {
    /*
    1 3 
    1 2 2 2 2 3
    */
    // readInput();
    // auto ret = dfs(matrix, MP(0,0), MP(4,4));
    string result = "";
    generate_01(5,0,result);
    return 0;
}