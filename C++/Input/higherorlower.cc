#include <iostream>
#include <string>
#include <random>


int main(){
    int target;
    int guessCount = 0;
    target = (rand() % 1000) + 1;
    int guess = 0;
    std::cout << "Can you guess my magic number?" << std::endl;
    std::cout << "It's a number between 1 and 1000; and I'll let you know whether it's higher or lower!" << std::endl;
    while(guess != target){
        guessCount++;
        std::cout << "Guess " << guessCount << ": ";
        std::cin >> guess;
        if(guess<target){
            std::cout << "The target number is higher!" << std::endl;
        }
        else if(guess>target){
            std::cout << "The target number is lower!" << std::endl;
        }
    }
    std::cout << "You guessed my magic number! It only took you " << guessCount <<" attempts!" << std::endl;
    return 0;
}