// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This is a positive, negative, zero program

#include <iostream>

int main() {
    // This function checks if user input is positive, negative or zero
    // define variables
    int integer;

    // input
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> integer;

    // process/output
    if (integer > 0) {
        std::cout << integer << " is a positive number." << std::endl;
    } else if (integer < 0) {
        std::cout << integer <<  " is a negative number." << std::endl;
    } else {
        std::cout << "0 is just zero!"  << std::endl;
    }

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
