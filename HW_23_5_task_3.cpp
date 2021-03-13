#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::string river_fish;
    std::string input;
    std::vector<std::string> buffer;
    std::ifstream from_river;
    std::ofstream to_river, to_basket;

while(true)
{
    //clear buffer before putting data in it
    buffer.clear();

    //read river to buffer
    from_river.open("C:\\Users\\Poizone\\CLion_HW23_5\\river_fishes.txt");
    while(!from_river.eof())
    {
        std::string tmp;
        from_river >> tmp;
        if(tmp != "") buffer.push_back(tmp);
    }
    from_river.close();

    //check whats in the buffer
    std::cout << "\nwhat in buffer:" << std::endl;
    for(int i = 0; i < buffer.size(); i++)
    {
        std::cout << buffer[i] << std::endl;
    }
    //condition to stop fishing (if nothing got from river to buffer)
    if(buffer.empty())
    {
        std::cout << "THERE IS NO MORE FISH!";
        break;
    }

    //user input fish type
    std::cout << "\ntype your fish:";
    std::cin >> input;

    //check user input with buffer
    for(int i = 0; i < buffer.size(); i++)
    {
        if(input == buffer[i])
        {
            buffer[i] = "";
            //write fish to basket
            to_basket.open("C:\\Users\\Poizone\\CLion_HW23_5\\fish_basket.txt", std::ios::app);
            to_basket << input << std::endl;
            to_basket.close();
            //write buffer back to river without fish been cought
            to_river.open("C:\\Users\\Poizone\\CLion_HW23_5\\river_fishes.txt");
            for(int j = 0; j < buffer.size(); j++)
            {
                if(buffer[j] == "") continue;
                to_river << buffer[j] << std::endl;
            }
            to_river.close();
            break;
        }
    }
}
    return 0;
}