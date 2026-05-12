#include "Admin.h"

Admin::Admin(string n) : User(n) {}

void Admin::addMovie(vector<string>& movies) {
    string movie;
    cin.ignore();
    cout << "Enter movie name: ";
    getline(cin, movie);
    movies.push_back(movie);
    cout << "Movie Added Successfully!\n";
}

void Admin::removeMovie(vector<string>& movies) {
    if (movies.empty()) {
        cout << "No movies available.\n";
        return;
    }
    cout << "\n===== Movies List =====\n";
    for (int i = 0; i < (int)movies.size(); i++) {
        cout << i + 1 << ". " << movies[i] << endl;
    }
    int choice;
    while (true) {
        cout << "Enter movie number to remove: ";
        cin >> choice;
        if (choice >= 1 && choice <= (int)movies.size()) {
            break;
        } else {
            cout << "Invalid Choice! Try Again.\n";
        }
    }
    movies.erase(movies.begin() + choice - 1);
    cout << "Movie Removed Successfully!\n";
}