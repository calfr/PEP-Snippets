#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Who are you? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";
    return 0;
}