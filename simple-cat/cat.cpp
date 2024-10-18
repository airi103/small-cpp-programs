#include <iostream>
#include <string>
#include <fstream>

void readFile(const std::string& fileName) {
    std::fstream myFile;
    myFile.open(fileName, std::ios::in); // read
    if (myFile.is_open()) {
        std::string line;
        while (getline(myFile, line)) {
            std::cout << line << std::endl;
        }
    } else {
        std::cerr << "Failed to open file.\n";
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "cat: exactly one argument required.\n";
        std::cerr << "Usage: cat <filename>\n";
        return 1;
    }

    std::string fileName = (argv[1]);
    // std::string fileName;
    // std::cout << "Enter the filename: ";
    // std::cin >> fileName;

    readFile(fileName);
    return 0;
}
