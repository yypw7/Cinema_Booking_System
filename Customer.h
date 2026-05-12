#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"
#include "Movie.h"
#include <vector>

class Customer : public User {
public:
    Customer(string n);
    void viewMovies(vector<Movie*>& movies);
};

#endif