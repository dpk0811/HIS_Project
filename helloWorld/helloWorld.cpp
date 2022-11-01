#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Hello World!\n";
    std::cout << "Argument count: " << argc - 1 << "\nValue(s): \n";
    for(int i = 1; i < argc; ++i){
        std::cout << argv[i] << "\n";
    }
    return 0;
}