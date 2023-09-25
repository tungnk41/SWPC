namespace permu_combine_scope {
    const vi data{1,2,3};
    vb visited(data.size(), false);
    vi result;
}

// generate_permutation(data, visited, result);
void generate_permutation(const vi& data = permu_combine_scope::data, vb& visited = permu_combine_scope::visited, vi& result = permu_combine_scope::result) {
    auto k = data.size();
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

void generate_permutation_2(const vi& data = permu_combine_scope::data) {
    vi temp{data};
    do {
        for (auto i : temp) {
            cout << i << " ";
        }
        cout  << endl;
    } while(std::next_permutation(temp.begin(), temp.end()));
}


//###############################


// generate_permutation(data, visited, result);
void generate_combination(const vi& data = permu_combine_scope::data, vb& visited = permu_combine_scope::visited, vi& result = permu_combine_scope::result) {
    //CkN = k =>
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
        generate_combination(data, visited, result);
        result.pop_back();
        visited[i] = false;
    }
}

void generate_combination_2(const vi& data = permu_combine_scope::data) {
    vi temp{data};
    //example n = 3, k =2
    std::string mask{"110"};
    do {
        FOR(i,0,data.size()-1) {
            if (mask[i] == '1') {
                cout << temp[i] << " ";
            }
        }
        cout  << endl;
    } while(std::next_permutation(temp.begin(), temp.end()));
}