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
vector<vi> dirs{{1,0},{-1,0},{0,1},{0,-1}};

vector<vi> matrix;
vi data;
bool isValidPoint(const vector<vi>& matrix, int i, int j) {
    return (i >= 0 && i < (int)matrix.size()) && ( j>=0 && j<(int)matrix[0].size());
}

#include "fast_io.h"
#include "bfs.h"
#include "dfs.h"
#include "binary_search.h"
#include "backtrack.h"
#include "permutation.h"
#include "combination.h"
#include "custom_sort.h"


int main() {
    // visited.resize(data.size(),false);
    // readFile();
    // readInput();
    // writeFile(abc);
    
    generate_permutation();

    
    return 0;
}