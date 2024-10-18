#include <iostream>
#include <algorithm>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "reverse: exactly one argument required\n";
        std::cerr << "Usage: reverse <string>\n";
        return 1;
    }
    std::string str = (argv[1]);
    std::reverse(str.begin(), str.end());
    std::cout << str << std::endl;

    return 0;
}
