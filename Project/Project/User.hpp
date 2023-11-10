#pragma once

#include <string>

class User
{
public:
    enum class Role
    {
        Admin,
        User
    };

    User() = default;
    User(const std::string& userName, const std::string& userPassword, Role userRole);

    void setName(const std::string& userName);
    void setPassword(const std::string& userPassword);
    void setRole(Role userRole);

    const std::string& getName() const;
    const std::string& getPassword() const;
    Role getRole() const;


private:
    std::string name;
    std::string password;
    Role role = Role::User;
};
