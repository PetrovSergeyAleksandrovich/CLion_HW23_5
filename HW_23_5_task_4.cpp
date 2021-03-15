#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int randomizer()
{
    srand ( time(NULL) );
    while(true)
    {
        int x = 0;
        x = rand();
        if (x==100 || x==200 || x==500 || x==1000 || x==2000 || x==5000) return x;
    }
}

void bankinit(std::string path)
{
    std::ofstream to_bank;
    int banksize = 10;
    to_bank.open(path);
    for(int i = 0, sum = 0; i < banksize; i++)
    {
        int banknote = randomizer();
        sum += banknote;
        to_bank << banknote << std::endl;
        std::cout << i << " position / " << banknote << "RUB. you can take: " << sum << std::endl;
        Sleep(500);
    }
    to_bank.close();
}

enum action{
    TAKE,
    ADD,
    EMPTY
};

action user_action_f()
{
    std::string command = "none";
    while(command != "add" && command != "take")
    {
        std::cout << "\ntype 'add' or 'take' to make action with money: ";
        std::cin >> command;
        if(command == "add")
        {
            return ADD;
        }
        else if(command == "take")
        {
            return TAKE;
        }
    }
}

int main()
{
    int user_input = -1;
    int money = 0;
    action user_action;
    std::vector<int> buffer;
    std::ofstream to_bank;
    std::ifstream from_bank;
    std::string path = "C:\\Users\\Poizone\\CLion_HW23_5\\bank.txt";

    //initialize money in the bank
    bankinit(path);

    while(true)
    {
        //Initialize variables;
        buffer.clear();
        money = 0;
        user_input = -1;
        user_action = EMPTY;

        //initialize user action
        user_action = user_action_f();

        //IF ACTION IS TAKE MONEY
        if(user_action == TAKE)
        {
            //type amount of money user wants to take
            while(user_input % 100 != 0)
            {
                std::cout << "Input number to take equial to x100: ";
                std::cin >> user_input;
            }
            std::cout << "\nOK\n";

            //read bank to buffer
            from_bank.open(path);
            while(!from_bank.eof())
            {
                int tmp;
                from_bank >> tmp;
                buffer.push_back(tmp); //if not empty string
            }
            buffer.pop_back();
            from_bank.close();

            //check if it's possible to provide money
            for(int i = 0; i < buffer.size(); i++)
            {

                if(money != user_input && money < user_input)
                {
                    money += buffer[i];
                    buffer[i] = 0;
                }

                if(money == user_input)
                {
                    std::cout << "\nYOUR CASH: " << money << std::endl;

                    to_bank.open(path, std::ios::trunc);
                    for(int j = 0; j < buffer.size(); j++)
                    {
                        to_bank << buffer[j] << std::endl;
                    }
                    to_bank.close();
                    //check what's in the buffer
                    std::cout << "\nwhat in bank:" << std::endl;
                    for(int j = 0, sum = 0; j < buffer.size(); j++)
                    {
                        std::cout << j << " " << buffer[j] << std::endl;
                        sum += buffer[j];
                        if(sum == 0 && j == buffer.size() - 1)
                        {
                            std::cout <<"\nNO MONEY LEFT IN BANK";
                            return 0;
                        }
                    }
                    break;
                }

                else if(money > user_input)
                {
                    std::cout << "operation error. type another number: "<< std::endl;
                    break;
                }
            }
        }

        //IF ACTION IS ADD MONEY
        if(user_action == ADD)
        {
            //read bank to buffer
            from_bank.open(path);
            while(!from_bank.eof())
            {
                int tmp;
                from_bank >> tmp;
                buffer.push_back(tmp); //if not empty string
            }
            buffer.pop_back();
            from_bank.close();

            for(int i = 0, tmp = 0; i < buffer.size(); i++)
            {
                if (buffer[i] == 0) buffer[i] = randomizer();
            }

            to_bank.open(path, std::ios::trunc);
            for(int j = 0; j < buffer.size(); j++)
            {
                to_bank << buffer[j] << std::endl;
            }
            to_bank.close();

            std::cout << "\nwhat in bank:" << std::endl;
            for(int j = 0, sum = 0; j < buffer.size(); j++)
            {
                std::cout << j << " " << buffer[j] << std::endl;
            }
        }

    }

    return 0;
}