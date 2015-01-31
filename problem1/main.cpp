//
//  main.cpp
//  problem1
//
//  Created by Katelynn Alexander on 1/31/15.
//  Copyright (c) 2015 csci. All rights reserved.
//

/*
 Project Euler - Problem 1
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    int sumThrees, sumFives, total, threes, fives;
    for(int i = 1; i <= 10; i++){
        //Figures out the multiples of 3
        threes = i*3;
        std::cout << threes << " ";
        if(threes <= 10){
            sumThrees += threes;
        }
    }
    std::cout << "\nSum of Threes: " << sumThrees << "\n";
    for(int i = 1; i <= 10; i++){
        //Figures out the multiples of 5
        fives = i*5;
        std::cout << fives << " ";
        if(fives <= 10){
            sumFives += fives;
        }
    }
    std::cout << "\nSum of Fives: " << sumFives << "\n";
    total = sumFives + sumThrees;
    return total;
    return 0;
}