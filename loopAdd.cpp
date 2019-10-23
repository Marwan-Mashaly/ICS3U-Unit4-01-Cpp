// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program lets user to add total of number of loops made

#include <iostream>
#include <string>

int main() {
    // This function lets user to add total of number of loops made
    std::string num;
    int sum = 0;
    int numCheck;

    // input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> num;
    std::cout << "" << std::endl;

    // process & output
     try {
        numCheck = std::stoi(num);
        while (numCheck != 0) {
            sum += numCheck;
            numCheck -= 1;
            std::cout<< sum << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "Invalid number";
     }
}
