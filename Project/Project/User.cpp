#include "User.hpp"

User::User(const std::string& userName, const std::string& userPassword, Role userRole)
{
    name = userName;
    password = userPassword;
    role = userRole;
}

void User::setName(const std::string& userName)
{
    name = userName;
}

void User::setPassword(const std::string& userPassword)
{
    password = userPassword;
}

void User::setRole(Role userRole)
{
    role = userRole;
}

const std::string& User::getName() const
{
    return name;
}

const std::string& User::getPassword() const
{
    return password;
}

User::Role User::getRole() const
{
    return role;
}
