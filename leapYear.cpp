// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: April 3, 2025
// Program that takes in a year from the user,
// it then determines whether it is a leap year or not
// according to the Gregorian calendar.

#include <iostream>
#include <string>
#include <cstdio>

int main() {
    // Get the year as a string
    std::string yearAsString;
    std::cout << "Enter a year: ";
    std::getline(std::cin, yearAsString);

    try {
        // Convert the year input to an integer
        int year = std::stoi(yearAsString);

        // Check if the year is positive
        if (year > 0) {
            // Check if the year is divisible by 4
            if (year % 4 == 0) {
                // Check if the year is divisible by 100
                if (year % 100 == 0) {
                    // Check if the year is divisible by 400
                    if (year % 400 == 0) {
                        // If it's divisible by 4, 100, and 400,
                        // it's a leap year
                        printf("%i is a leap year.\n", year);
                    } else {
                        // If it's divisible by 4 and 100,
                        // but not divisible by 400,
                        // it's not a leap year
                        printf("%i is NOT a leap year.\n", year);
                    }
                } else {
                    // If it's divisible by 4
                    // and not divisible by 100,
                    // it's a leap year
                    printf("%i is a leap year.\n", year);
                }
            } else {
                // If it's not divisible by 4,
                // it's not a leap year
                printf("%i is NOT a leap year.\n", year);
            }
        } else {
            // Tell the user that their input must be positive
            printf("The year must be a positive integer.\n");
        }
    } catch (std::invalid_argument) {
        // Tell the user that their input wasn't an integer
        std::cout << yearAsString;
        std::cout << " is not an integer.\n";
    }
    // Program completion message
    printf("Thanks for playing!\n");
}
