#include <iostream>


void display(char* value){
    std:: cout << value << "\n";
}

int main(int argc, char** argv) {
    std::cout << "Hello World!\n";
    std::cout << "Argument count: " << argc - 1 << "\nValue(s): \n";
    for(int i = 1; i < argc; ++i){
        display(argv[i]);
    }
    return 0;
}