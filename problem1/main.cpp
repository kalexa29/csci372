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

//Solution to Problem 1
int calcMultiSum(int var1, int var2, int max){
    int tot = 0, tot3 = 0, tot2 = 0, tot1 = 0;
    int var3 = var1*var2;
    for(int i = 1; i < max; i++){
        if(i%var3 == 0){
            tot3 += i;
        }
        else if(i%var1 == 0){
            tot2 += i;
        }
        else if(i%var2 == 0){
            tot1 += i;
        }
    }
    tot = tot2 + tot1 + tot3;
    std::cout << "Run Total:  " << tot << "\n";
    return 0;
}

//tester function to get multiples
int getMultiples(int var, int max){
    int tot = 0, num = 0;
    for(int i = 1; i < max; i++){
        num = i*var;
        if(num < max){
            tot += num;
        }
    }
    std::cout << "\nTotal of multiples of " << var << ": " << tot;
    return tot;
    return 0;
}

//tester function to calculate sum
int testSum(int var1, int var2, int max){
    int var3 = 0;
    var3 = var1 * var2;
    int total = getMultiples(var1, max) + getMultiples(var2, max) - getMultiples(var3, max);
    std::cout <<"\nTest Total: " << total;
    return 0;
}

int main(int argc, const char * argv[]) {
    int var1 = 3;
    int var2 = 5;
    int maxVar = 1000;
    testSum(var1, var2, maxVar);
    std::cout << "\n";
    
    calcMultiSum(var1,var2,maxVar);

    return 0;
}