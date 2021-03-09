// simply check date between 1 and 31, months between 1 and 12. Year should be 2021
// THIS simplified function doesn't check 28-29, 30 or 31 days per month.
bool check_date(std::string &date)
{
    std::string  user_input;
    bool check_status = false;
    int d, m, y;
    y = std::stoi(date.substr(6));
    m = std::stoi(date.substr(3, 2));
    d = std::stoi(date.substr(0, 2));
    while(true)
    {
        if((d > 0 && d < 32) &&
           (m > 0 && m < 13) &&
            y == 2021)
        {
            check_status = true;
            return check_status;
        }
        y = 0; m = 0; d = 0;
        std::cout << "Wrong date. ";
        std::cout << "Type date DD.MM.YYYY: ";
        std::cin >> user_input;
        y = std::stoi(user_input.substr(6));
        m = std::stoi(user_input.substr(3, 2));
        d = std::stoi(user_input.substr(0, 2));
    }
}