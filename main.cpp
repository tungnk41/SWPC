#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pii;
#define F first
#define S second 
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for(int i=(int)a;i<=(int)b;++i)
#define RFOR(i,a,b) for(int i=(int)a;i>=(int)b;--i)
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)


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
#include "custom_sort.cpp"

void readInput() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N,M;
    cin>>N>>M;
    while (N--){
        do {
            int a;
            cin >> a;
            cout << a;
        } while (std::cin && std::cin.peek() != '\n');
    }
}

int main() {
    /*
    2 3 
    1 2 2 2 2 3
    3 4 5 6 7 8
    */
    // readInput();
    // auto ret = dfs(matrix, mp(0,0), mp(4,4));
    // string result = "";
    // generate_01(5,0,result);
    // vector_sort_custom();
    vi data{1,2,3};
    vb visited;
    visited.resize(data.size(),false);
    vi result;
    generate_permutation(data, visited, result);
    return 0;
}