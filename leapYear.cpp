// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 24, 2022
// This program asks the user for a year and then tells them if its a leap year


// includes all required libraries
#include <iostream>

int main() {
    // initializes the variables
    std::string yearStr;
    int yearInt;

    // gets user input
    std::cout << "Enter a year: ";
    std::cin >> yearStr;

    // adds extra line
    std::cout << "\n";

    // try is used to catch miss inputs
    try {
        // casts the user input to an integer
        yearInt = std::stoi(yearStr);

        // checks if the year is evenly divisible by 4
        if (yearInt % 4 == 0) {
            // checks if the year is evenly divisible by 100
            if (yearInt % 100 == 0) {
                // checks if the year is evenly divisible by 400
                if (yearInt % 400 == 0) {
                    std::cout << "Your year is a leap year";
                } else {
                    std::cout << "Your year is not leap year";
                }
            } else {
                std::cout << "Your year is a leap year";
            }
        } else {
            std::cout << "Your year is not leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    // adds extra line
    std::cout << "\n";
}
