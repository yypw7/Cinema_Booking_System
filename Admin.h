#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include <vector>

class Admin : public User {
public:
    Admin(string n);
    void addMovie(vector<string>& movies);
    void removeMovie(vector<string>& movies);
};

#endif