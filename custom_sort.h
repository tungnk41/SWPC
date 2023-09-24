struct Data {
    int a;
    int b;
};

// vector_sort_custom();
//sort(v.begin(), v.end(), greater<int>());  :  5 4 3 2 1
//sort(v.begin(), v.end());  :  1 2 3 4 5
void vector_sort_custom() {
    vector<Data> v{{3,4},{1,2},{4,5}};
    sort(v.begin(), v.end(), [](const Data& d1, const Data& d2) {return (d1.a < d2.a);});
    FOR(i,0,v.size()-1) {
        cout << v[i].a << " " << v[i].b <<endl; 
    }
}

void priority_queue_sort_custom() {
    auto comparator = [](const Data& d1, const Data& d2) {
        return d1.a < d2.a; // Max Heap
    };
    std::priority_queue<Data, std::vector<Data>, decltype(comparator)> pq(comparator);
    pq.push({1,2});
    pq.push({3,5});
    pq.push({0,8});
    while(!pq.empty()) {
        auto v = pq.top();
        pq.pop();
        cout << v.a << " " << v.b <<endl; 
    }
}