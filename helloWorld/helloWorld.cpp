#include <iostream>
#include<cstring>

void NeverExecuted(){
    std::cout << "This function was never executed :)\n";
}

void display(char *values){
    char array[32];
    std:: strcpy(array, values);
    std:: cout << array << "\n";
    std:: cout << "Size: " << sizeof(array) << "\n";
}

int main(int argc, char** argv) {
    std::cout << "Hello World!\n";
    std::cout << "Argument count: " << argc - 1 << "\nValue(s): \n";
    for(int i = 1; i < argc; ++i){
        display(argv[i]);
    }
    std:: cout << "Program terminated without errors!";
    return 0;
}