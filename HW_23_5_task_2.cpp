#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int randomizer()
{
    int x = 0;
    srand ( time(NULL) );
    for(int i = 0; i < rand() % 10; i++)
    {
        x += rand() % 10;
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
    x = randomizer(),
    y = randomizer(),
    rand_number = randomizer();

    while(true)
    {
        for(int i = 0; i < randomizer(); i++)
        {
            std::cout << bool_randomizer(rand_number) << " ";
            Sleep(1001);
        }

    }


    return 0;
}
