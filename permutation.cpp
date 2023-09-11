void generate_permutation(const vi& data,vb& visited, vi& result) {
    if(data.size() == result.size()) {
        FOR(i,0,result.size()-1) {
            cout << result[i] << " ";
        }
        cout<<endl;
        // vi temp;
        // copy(result.begin(), result.end(), back_insert(temp));
        // ans.PB(temp);
    }
    FOR(i,0,data.size()-1) {
        if(visited[i] == true) continue;
        result.PB(data[i]);
        visited[i] = true;
        generate_permutation(data, visited, result);
        result.pop_back();
        visited[i] = false;
    }
}

vi next_permutation(const vi& data) {
    //find lastest peek position
    int lastPeekPos = -1;
    FOR(i,0,data.size()-1) {
        if((i > 0) && (data[i] > data[i-1])) {
            peekPos = i;
        }
    }
    if()
}