#include <ctime>
#include <iostream>
#include <Windows.h>
#include <conio.h>

int main() {
    while (true)
    {
        std::time_t result = std::time(nullptr);
        std::string time = std::ctime(&result);
        std::cout << time;
        Sleep(1000);
        system("cls");
    }
    return 0;
}
