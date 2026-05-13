#ifndef SEAT_H
#define SEAT_H

#include <iostream>
using namespace std;

class Seat {
private:
int seatNumber;
string seatType;
bool isAvailable;

public:
Seat(int number, string type);
int getSeatNumber();
string getSeatType();
bool getAvailability();
void bookSeat();
void cancelSeat();
void displaySeatInfo();
};

#endif
