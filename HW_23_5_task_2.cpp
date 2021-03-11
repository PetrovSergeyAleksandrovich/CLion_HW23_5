#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int randomizer_x()
{
    int x = 0;
    srand ( time(NULL) );
    while(!x)
    {
        for(int i = 0; i < rand() % 5; i++)
        {
            x += rand() % 5;
        }
    }
    return x;
}

int randomizer_y()
{
    int x = 0;
    srand ( time(NULL) );
    while(!x)
    {
        for(int i = 0; i < rand() % 10; i++)
        {
            x += rand() % 5;
        }
    }

    return x;
}

int bool_randomizer()
{
    int x = 0;
    srand ( time(nullptr) );
    x = rand() % 2;
    return x;
}

int main()
{
    int
    x = randomizer_x(),
    y = randomizer_y();

    std::ofstream file;
    file.open("C:\\Users\\Poizone\\CLion_HW23_5\\bool_picture.txt");

    std::cout << "string length x=" << x << " column height y=" << y << std::endl << std::endl;
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            int w = bool_randomizer();
            std::cout << w << " ";
            file << w << " ";
            Sleep(250);
        }
        std::cout << "\n";
        file << "\n";
    }
    file.close();

    return 0;
}
