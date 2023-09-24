bool dfs(vector<vi>& matrix, pii start, pii end) {
    stack<pii> s;
    vector<vb> visited{matrix.size(),vb(matrix[0].size(),false)};
    s.push(start);
    visited[start.F][start.S] = true;
    while(!s.empty()) {
        auto pos = s.top();
        s.pop();
        if(pos == end) {
            return true;
        }
        for (auto dir: dirs) {
            int i = pos.F + +dir[0];
            int j = pos.S + dir[1];
            if(isValidPoint(matrix,i, j) && !visited[i][j]) {
                s.push(mp(i, j));
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
// auto ret = dfs(matrix, mp(0,0), mp(4,4));