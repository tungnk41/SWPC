#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pii;
#define F first
#define S second 
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for(int i=(int)a;i<=(int)b;i++)
#define RFOR(i,a,b) for(int i=(int)a;i>=(int)b;--i)
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define INF 1e9
vector<vi> dirs{{1,0},{-1,0},{0,1},{0,-1}};


#include "fast_io.h"
#include "bfs.h"
#include "dfs.h"
#include "binary_search.h"
#include "backtrack.h"
#include "permutation-combination.h"
#include "custom_sort.h"
#include "dijkstra.h"


int main() {
    // visited.resize(data.size(),false);
    // readFile();
    // readInput();
    // writeFile(abc);
    
    // generate_permutation();
    // generate_combination();
    dijkstra();
    
    return 0;
}