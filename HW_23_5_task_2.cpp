#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int randomizer_x()
{
    int x = 0;
    srand ( time(NULL) );
    for(int i = 0; i < rand() % 5; i++)
    {
        x += rand() % 5;
        if(!x) {i=0;continue;}
    }
    return x;
}

int randomizer_y()
{
    int x = 0;
    srand ( time(NULL) );
    for(int i = 0; i < rand() % 10; i++)
    {
        x += rand() % 5;
        if(!x) {i=0;continue;}
    }
    return x;
}

int bool_randomizer(int times)
{
    int x = 0;
    srand ( time(NULL) );
    x = rand() % 2;
    return x;
}

int main()
{
    int
    x = randomizer_x(),
    y = randomizer_y(),
    rand_number = randomizer_x() + randomizer_y();

    std::ofstream file;
    file.open("C:\\Users\\Poizone\\CLion_HW23_5\\bool_picture.txt");

    std::cout << "string length x=" << x << " column height y=" << y << std::endl << std::endl;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            int w = bool_randomizer(rand_number);
            std::cout << w << " ";
            file << w << " ";
            Sleep(100);
        }
        std::cout << "\n";
        file << "\n";
    }
    file.close();

    return 0;
}
