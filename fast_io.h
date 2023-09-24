void readInput(bool enableFastIO = true) {
    if(enableFastIO) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(0);
        std::cout.tie(0);
    }
    int N,M;
    cin>>N>>M;
    std::cin.ignore(); // std::cin.peek() == '\n'
    while (N--){
        int copyM = M;
        while(std::cin && std::cin.peek() != '\n' && copyM--) {
            int a;
            cin >> a;
            cout << a;
        }
        std::cin.ignore(); // std::cin.peek() == '\n'
    }
}

// Read file to std::cin
void readFile(std::string filename = "input.txt", bool enableFastIO = true) {
    if(enableFastIO) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(0);
        std::cout.tie(0);
    }
    std::ifstream inputFile(filename);
    std::cin.rdbuf(inputFile.rdbuf());
    readInput(false);
}

// Write file from std::out;
void writeFile(function<void()> print, std::string filename = "output.txt") {
    std::ofstream outputFile(filename);
    std::streambuf* originalCoutBuffer = std::cout.rdbuf();
    // Redirect std::cout to write to the output file
    std::cout.rdbuf(outputFile.rdbuf());

    // Now, you can write to std::cout, and it will be redirected to the output file
    print();

    // Restore std::cout to its original buffer
    std::cout.rdbuf(originalCoutBuffer);
}