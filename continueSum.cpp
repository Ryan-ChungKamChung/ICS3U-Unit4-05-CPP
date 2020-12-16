// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 20ew20
// Program adds inputted numbers through input loops

#include <iostream>
#include <string>


int main() {
    // this function adds inputted numbers through input loops

    std::string number_of_inputs_string;
    std::string input_number_string;
    int input_number;
    int random_number;
    int number_of_inputs;
    int sum = 0;
    int loop_counter = 0;

    while (true) {
        std::cout << "Please enter how many numbers you"
        << " would like to add together: ";
        std::cin >> number_of_inputs_string;

        try {
            number_of_inputs = std::stoi(number_of_inputs_string);
            if (number_of_inputs < 0) {
                throw std::invalid_argument("");
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    while (loop_counter < number_of_inputs) {
        loop_counter = loop_counter + 1;

        while (true) {
            std::cout << "Please enter an integer to add: ";
            std::cin >> input_number_string;

            try {
                input_number = std::stoi(input_number_string);
                if (input_number < 0) {
                    throw std::invalid_argument("");
                }

                break;
            } catch (std::invalid_argument) {
                std::cout << "This isn't a valid input" << std::endl;
            }
        }

        sum = sum + input_number;

        if (loop_counter < number_of_inputs) {
            continue;
        }

        std::cout << "The sum of all positive numbers is: "
        << sum << std::endl;
    }
}
