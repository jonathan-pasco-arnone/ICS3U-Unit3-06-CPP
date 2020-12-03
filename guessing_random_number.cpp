// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program uses a try statement

#include <iostream>
#include <random>

int main() {
    // This function uses a try statement

    std::string guessStr;
    double guess;
    double generatedNumber;

    // Random number code
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    generatedNumber = idist(rgen);

    std::cout << "" << std::endl;
    std::cout << "This program makes the user guess the number that"
          "the computer has saved." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please input a number (from 0 to 9): ";
    std::cin >> guessStr;
    std::cout << "" << std::endl;

    try {
        guess = std::stoi(guessStr);
        std::cout << "You entered an integer correctly" << std::endl;
        std::cout << "" << std::endl;
        if (guess == generatedNumber) {
            std::cout << "You Guessed Correctly! Yay!"
                  "Please Play Again" << std::endl;
        } else {
            std::cout << "You guessed incorrectly :("
                  "Please Try Again" << std::endl;
            std::cout << "The correct number was "
                  << generatedNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This was not an integer";
    }
}
