#include <iostream>
#include <fstream>
#include <string>
#include "helpers.h"

int main() {

    std::string user_input;

    std::ofstream file;
    file.open("C:\\Users\\Poizone\\CLion_HW23_5\\payments.txt", std::ios::app);
    std::cout << "Type name: ";
    std::cin >> user_input;
    file << user_input << " ";

    std::cout << "Type surname: ";
    std::cin >> user_input;
    file << user_input << " ";

    std::cout << "Type date DD.MM.YYYY (single numbers like 02.03.2021): ";
    std::cin >> user_input;
    //wrong user_input format here terminates program execution
    while(!check_date(user_input)) check_date(user_input); //see helpers.h for description
    file << user_input << " ";

    std::cout << "Type money: ";
    std::cin >> user_input;
    file << user_input << " ";
    file << "\n";

    return 0;
}
