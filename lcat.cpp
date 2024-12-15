#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
      std::cout << "Error: File not found" << std::endl;
    }

    std::string text;
    while (std::getline(file, text)) {
      std::cout << text << std::endl;
    }
  } else {
    std::cout << "Error: not filname provided" << std::endl;
  }
  return 0;
}
