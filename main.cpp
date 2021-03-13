#include <iostream>
#include <fstream>

int main()
{
    std::ifstream file;
    std::string my_str = "string";
    file.open("C:\\Users\\Poizone\\CLion_HW23_5\\TEST.txt");

    file >> my_str;
    file >> my_str;
    file >> my_str;
    std::cout << my_str;

    file.close();
    return 0;
}
