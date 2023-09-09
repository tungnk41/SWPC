
// Find minimum step from start to end
bool bfs(const vector<vi>& matrix, pii start, pii end) {
    queue<pii> q;
    vector<vb> visited{matrix.size(),vb(matrix[0].size(),false)};
    q.push(start);
    visited[start.F][start.S]=true;
    while(!q.empty()) {
        auto pos = q.back();
        q.pop();
        int x = pos.F;
        int y = pos.S;
        if(pos == end) {
            return true;
        }
        FOR(i,-1,1) {
            FOR(j,-1,1) {
                if(isValidPoint(matrix,x+i,y+j) && !visited[x+i][y+j]) {
                    q.push(MP(x+i,y+j));
                    visited[x+i][y+j]=true;
                }
            }
        }
    }
    return false;
}