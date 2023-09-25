
namespace custom_sort_scope {

    struct Data {
        int a;
        int b;
    };
    vector<Data> v{{3,4},{1,2},{4,5}};
}


// vector_sort_custom();
//sort(v.begin(), v.end(), greater<int>());  :  5 4 3 2 1
//sort(v.begin(), v.end());  :  1 2 3 4 5
void vector_sort_custom(vector<custom_sort_scope::Data> v = custom_sort_scope::v) {
    sort(v.begin(), v.end(), [](const custom_sort_scope::Data& d1, const custom_sort_scope::Data& d2) {return (d1.a < d2.a);});
    FOR(i,0,v.size()-1) {
        cout << v[i].a << " " << v[i].b <<endl; 
    }
}

void priority_queue_sort_custom() {
    auto comparator = [](const custom_sort_scope::Data& d1, const custom_sort_scope::Data& d2) {
        return d1.a < d2.a; // Max Heap
    };
    std::priority_queue<custom_sort_scope::Data, std::vector<custom_sort_scope::Data>, decltype(comparator)> pq(comparator);
    pq.push({1,2});
    pq.push({3,5});
    pq.push({0,8});
    while(!pq.empty()) {
        auto v = pq.top();
        pq.pop();
        cout << v.a << " " << v.b <<endl; 
    }
}