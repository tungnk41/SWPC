namespace backtrack{
    int length = 5;
    int count = 5;
    std::string result = "";
}
// string result = "";
// generate_01(5,0,result);
void generate_01(int length = backtrack::length, int count = backtrack::count, string& result = backtrack::result) {
    if (count == length) {
        cout << result << endl;
        return;
    }
    FOR(i,0,1) {
        result += std::to_string(i);
        generate_01(length, count+1,result);
        result.erase(result.end()-1);
    }
}
