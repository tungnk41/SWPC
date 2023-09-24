namespace permutation {
    static const vi data{1,2,3};
    static vb visited(data.size(), false);
    static vi result;
}

// generate_permutation(data, visited, result);
void generate_permutation(const vi& data = permutation::data, vb& visited = permutation::visited, vi& result = permutation::result) {
    auto k = 2U;
    if(result.size() == k) {
        for (auto i : result) {
            cout << i << " ";
        }
        cout<<endl;
        // vi temp;
        // copy(result.begin(), result.end(), back_insert(temp));
        // ans.pb(temp);
    }
    
    FOR(i,0,data.size()-1) {
        if(visited[i] == true) continue;
        result.pb(data[i]);
        visited[i] = true;
        generate_permutation(data, visited, result);
        result.pop_back();
        visited[i] = false;
    }
}

void generate_permutation_2(const vi& data) {
    vi temp{data};
    do {
        for (auto i : temp) {
            cout << i << " ";
        }
        cout  << endl;
    } while(std::next_permutation(temp.begin(), temp.end()));
}