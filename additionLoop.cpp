// Copyright (c) 2022 Peter Gemmell All rights reserved
// Created by Peter Gemmell
// Created on April 2022
// This program calculates if leap year

#include <iostream>
#include <string>

int main() {
    // this function uses a loop
    std::string integerInputAsString;
    int integerInput;
    int loopCounter = 0;
    int total = 0;

    // input
    std::cout << "Please enter a positive integer : ";
    std::cin >> integerInputAsString;

    // process & output
    try {
        integerInput = std::stoi(integerInputAsString);
        while (loopCounter < integerInput) {
            loopCounter = loopCounter + 1;
            total = total + loopCounter;
            }
        std::cout << "The sum of all positive numbers from 1 to " << ""
        << integerInput << " is " "" << total << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again." << std::endl;
    }
    std::cout << "Done." << std::endl;
}
