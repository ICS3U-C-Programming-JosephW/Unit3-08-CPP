// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Apr. 5, 2025
/* This program determines whether a year entered by the user 
is a leap year or not. Includes exceptions and negative 
integer handling. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to the style guidelines. */
#include <string>

// Runs the main function.
int main() {
    // Declare the string variable for the user's entered year.
    std::string yearAsStr;

    // Ask for the user to enter a year.
    std::cout << "Please, enter the desired year: ";
    // Store the user's input in the string-type year variable.
    std::cin >> yearAsStr;

    /* Try to check the validity of the inputted 
    year and whether it is a leap year or not.*/
    try {
        // Attempt to convert the string-type year input into an integer.
        int yearAsInt = std::stoi(yearAsStr);

        // Check if the year is less than zero.
        if (yearAsInt < 0) {
            /* Display to the user that they 
            cannot enter a negative year.*/
            std::cout << "\n" << yearAsInt << " is negative. "
            << "Negative years do not count.";
        } else {
            // Otherwise, continue to leap year detection.
            // Check if the year is divisible by 4.
            if (yearAsInt % 4 == 0) {
                // Check if the year is divisible by 100.
                if (yearAsInt % 100 == 0) {
                    // Check if the year is divisible by 400.
                    if (yearAsInt % 400 == 0) {
                        /* Display to the user that 
                        the year is a leap year. */
                        std::cout << "\n" << yearAsInt << " is a leap year. "
                        << "It has 366 days.";
                    } else {
                        /* Otherwise, it is not a leap year because it 
                        is a century year that is not divisible by 400.*/
                        // Display to the user that the year is not a leap year.
                        std::cout << "\n" << yearAsInt
                        << " is not a leap year. " << "It has 365 days.";
                    }
                } else {
                    /* Otherwise, it is a leap year because it 
                    is divisible by 4 but not 100. */
                    /* Display to the user that 
                    the year is a leap year. */
                    std::cout << "\n" << yearAsInt << " is a leap year. "
                    << "It has 366 days.";
                }
            } else {
                /* Otherwise, it is not a leap year because all 
                leap years must be divisible by 4. */
                // Display to the user that the year is not a leap year.
                std::cout << "\n" << yearAsInt << " is not a leap year. "
                << "It has 365 days.";
            }
        }
    }
    /* Run if std::stoi could not convert the
    user's input value into an integer. */
    catch (std::invalid_argument) {
        // Display to the user that their inputted year is not an integer.
        std::cout << "\n" << yearAsStr << " is not an integer.";
    }

    // Finally, display a message thanking the user for using this program.
    std::cout << "\n" << "Thanks for using the program!";
}
