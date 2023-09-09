int binarySearch(vi& data, int x) {
    int l =0;
    int r = data.size()-1;
    while (l<=r) {
        int m = l + (r-l)/2;
        if(x > data[m]) {
            l = l +1;
        }
        else if (x < data[m]) {
            r = m - 1;
        }
        else {
            return m;
        }
    }
    return -1;
}

bool binary_search(vi& data, int x) {
    // return std::binary_search(data.begin(), data.end(), x);
    return std::binary_search(data.begin(), data.end(), x, [](int a, int b){return a<b;});
}

//a in [a,b)
int lower_bound(vi& data, int x) {
    return std::lower_bound(data.begin(), data.end(), x)-data.begin();
}

//b+1 in [a,b)
int upper_bound(vi& data, int x) {
    return std::upper_bound(data.begin(), data.end(), x)-data.begin();
}