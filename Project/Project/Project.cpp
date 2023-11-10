#include <iostream>
#include <string>
#include <vector>

#include "User.hpp"

//bul'ka klasna

/*#define UserRole = 'u'
#define AdminRole = 'a'

struct User {
    int id;
    const char accountType;
    std::string userName;
    std::string password;
};*/

int main()
{
    User user;
    User::Role role;
    std::string login;
    std::string password;
    int choose = 0;
    int accType = 0;
    std::cout << "What do you want to do?\n1. Log in\n2. Sign in\nEnter your answer: ";
    std::cin >> choose;
    switch (choose) {
    case 1:
        std::cout << ' ';
        break;
    case 2:
        std::cout << "Choose account type:\n1. Admin\n2. User\nEnter your answer: ";
        std::cin >> accType;
        role = accType == 1 ? User::Role::Admin : User::Role::User;

        std::cout << "Create login: ";
        std::cin >> login;
        std::cout << "Create password: ";
        std::cin >> password;

        user.setName(login);
        user.setPassword(password);
        user.setRole(role);

        std::cout << "\nYou succesfully created your account!\nYour login is: " << user.getName() << std::endl;
        break;
    default:
        std::cout << "fuck you russia game gta for usa russia gay no gta";
        break;
    }

}