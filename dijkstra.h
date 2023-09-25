namespace dijkstraScope {
    std::unordered_map<int, vector<pair<int,int>>> graph{
        {1,{ {2,0},{3,0} }},
        {2,{ {4,0} }},
        {3,{ {4,0} }},
        {4,{ {0,0} }},
    };

    // vector<tuple<int,int,int>> edges{{1,2,0},{1,3,0},{2,4,0},{3,4,0}};
}

void dijkstra(std::unordered_map<int, vector<pii>>& graph = dijkstraScope::graph, int start = 1, int end = 4) {
    auto comparator = [](tuple<int,int,int> a, tuple<int,int,int> b) {
        return get<2>(a) > get<2>(b);
    };
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, decltype(comparator)> pq(comparator);
    unordered_map<int, int> trace;

    for(auto& pair: graph) {
        pq.push({pair.F,0, INF});
    }
}

