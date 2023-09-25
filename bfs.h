namespace bfsScope {
    vector<vector<int>> matrix{
        {1,0,0},
        {1,1,0},
        {1,0,1},
    };
    pii startPoint{0,0};
    pii endPoint{1,1};

    bool isValidPoint(const vector<vi>& matrix, int i, int j) {
        return (i >= 0 && i < (int)matrix.size()) && ( j>=0 && j<(int)matrix[0].size());
    }
}
// Find minimum step from start to end
bool bfs(const vector<vi>& matrix = bfsScope::matrix, pii start = bfsScope::startPoint, pii end = bfsScope::endPoint) {
    queue<pii> q;
    vector<vb> visited{matrix.size(),vb(matrix[0].size(),false)};
    q.push(start);
    visited[start.F][start.S]=true;
    while(!q.empty()) {
        auto pos = q.front();
        q.pop();
        if(pos == end) {
            return true;
        }
        for (auto dir: dirs) {
            int i = pos.F + +dir[0];
            int j = pos.S + dir[1];
            if(bfsScope::isValidPoint(matrix,i,j) && !visited[i][j]) {
                q.push(mp(i,j));
                visited[i][j]=true;
            }
        }
    }
    return false;
}

 /*
    2 3 
    1 2 2 2 2 3
    3 4 5 6 7 8
*/