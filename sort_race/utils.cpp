#pragma once
#include<iostream>
#include<string>

using namespace std;

int GetCorrectNumber(std::string text, int min, int max) {
    int n;
    std::cout << text << ":  ";
    while ((std::cin >> n).fail() || n<min || n>max || cin.peek() != '\n') {
        cin.clear();
        cin.ignore(10000, '\n');
        std::cout << "Enter correct number (" << min << "-" << max << "):";
    }
    return n;
}
