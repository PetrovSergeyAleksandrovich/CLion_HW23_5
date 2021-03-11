#include <iostream>
#include <fstream>

int main()
{
    bool flag = 0;
    int watchdog = 0;
    std::string river_fish = "none";
    std::string input = "none";
    std::string empty = "there is no such fish!!!";
    std::ifstream from_river;
    std::ofstream to_river;
    std::ofstream to_basket;

    while(true)
    {
        std::cout << "type your fish:";
        std::cin >> input;

        from_river.open("C:\\Users\\Poizone\\CLion_HW23_5\\fish_in_the_river.txt", std::ios::binary);

        while(input != river_fish && !from_river.eof())
        {
            watchdog = from_river.tellg();
            from_river >> river_fish;
            std::cout << watchdog << " " << river_fish << std::endl;
        }
        from_river.close();
        std::cout << "\ncheck1";

        to_basket.open("C:\\Users\\Poizone\\CLion_HW23_5\\fish_basket.txt", std::ios::app);
        to_basket << river_fish << std::endl;
        to_basket.close();
        std::cout << "\ncheck2";

        //ERROR HERE
        to_river.open("C:\\Users\\Poizone\\CLion_HW23_5\\fish_in_the_river.txt", std::ios::binary);
        to_river.seekp(watchdog);
        std::cout << "\ntell pointer to write from: " << to_river.tellp();
        to_river << empty;
        to_river.close();
        std::cout << "\ncheck3";
        //ERROR HERE

        river_fish = "none";
        input = "none";
        std::cout << std::endl;
    }

    return 0;
}