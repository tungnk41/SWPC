

void generate_01(int length, int count, string& result) {
    if (count == length) {
        cout << result << endl;
        return;
    }
    FOR(i,0,1) {
        result += std::to_string(i);
        generate_01(length, count+1,result);
        result.erase(result.size()-1);
    }
}