// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date : Dec 15, 2022
// This program prints the highest value of ten randomly
// generated numbers

#include <time.h>
#include <iostream>
#include <array>


/*Initializes max array size as a global variable so it
can be used inside parameters within function parameters*/
const int MAX_ARRAY_SIZE = 10;

int maxNumber(std::array<int, MAX_ARRAY_SIZE> numberArray) {
    int highestNum = -1;

    /*Gets the largest number by iterating through the array of
    numbers and replacing the highest number with the current
    element if it is larger than the previous highest number*/
    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        if (numberArray[counter] > highestNum) {
            highestNum = numberArray[counter];
        }
    }

    return highestNum;
}

int main() {
    // Initializing variables & array
    const int MIN_NUM = 0, MAX_NUM = 100;
    int randomNumber, maxNum;
    std::array<int, MAX_ARRAY_SIZE> randomNumbers;

    srand(time(NULL));


    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        // Generates a random number from 0-100
        randomNumber = (rand_r() % MAX_NUM + 1) + MIN_NUM;

        // Appends the number to the array

        randomNumbers[counter] = randomNumber;

        // Prints random number added to list
        std::cout << randomNumber << " added to array at index "
                  << counter << "\n";
    }

    maxNum = maxNumber(randomNumbers);

    // Prints the average of the ten randomly generated numbers
    std::cout << "The max value is: " << maxNum << std::endl;
}
