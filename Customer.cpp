#include "Customer.h"

Customer::Customer(string n) : User(n) {}

void Customer::viewMovies(vector<Movie*>& movies) {
    if (movies.empty()) {
        cout << "\nNo movies available.\n";
        return;
    }
    cout << "\n===== Available Movies =====\n";
    for (int i = 0; i < (int)movies.size(); i++) {
        cout << i + 1 << ". ";
        movies[i]->displayMovie();
        cout << endl;
    }
}