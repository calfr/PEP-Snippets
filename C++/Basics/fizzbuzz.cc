#include <iostream>
#include <string>

using std::string;


string fizzbuzz(int value){
    if (value%15 == 0){
        return "FizzBuzz";
    }
    else if (value%5 == 0){
        return "Buzz";
    }
    else if (value%3 == 0){
        return "Fizz";
    }
    else{
        return std::to_string(value);
    }
}

int main(){
    for(int i=1;i<=100;i++){
        std::cout << fizzbuzz(i) << std::endl;
    }
}
