//
//  main.cpp
//  Modular Arithmetic: The Game
//
//  Created by Ross Spencer on 8/22/17.
//  Copyright © 2017 Ross Spencer. All rights reserved.
//

#include <iostream>
int addition(int num1, int num2, int modulus);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World! Ready for some modular arithmetic?\n" << std::endl;
    
    int modulus, userNum, answer;
    std::cout << "Choose a modulus: ";
    std::cin >> modulus;
    std::cout << "Congrats! So far you've chosen " << modulus << " as a modulus: " << std::endl;
    srand(time(0));
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int option = 1;
    switch(option){
    case 1:
            std::cout << "What's " << num1 << " + " << num2 << "?" <<std::endl;
            answer = addition(num1, num2, modulus);
            std::cin >> userNum;
            std::cout << "The correct answer is " << answer << " !" << std::endl;
        

                break;
        case 2: break;
        case 3: break;
        case 4: break;
    }
    
    return 0;
}

int addition(int num1, int num2, int modulus){
    int answer;
    answer = num1 + num2;
    answer %= modulus;
    
    
    return answer;
    
}
