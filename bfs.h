
// Find minimum step from start to end
bool bfs(const vector<vi>& matrix, pii start, pii end) {
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
            if(isValidPoint(matrix,i,j) && !visited[i][j]) {
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