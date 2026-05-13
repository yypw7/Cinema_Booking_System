#include "Seat.h"

Seat::Seat(int number, string type) {
seatNumber = number;
seatType = type;
isAvailable = true;
}

int Seat::getSeatNumber() {
return seatNumber;
}

string Seat::getSeatType() {
return seatType;
}

bool Seat::getAvailability() {
return isAvailable;
}

void Seat::bookSeat() {
if (isAvailable) {
isAvailable = false;
cout << "Seat " << seatNumber << " booked successfully." << endl;
} else {
cout << "Seat " << seatNumber << " is already booked." << endl;
}
}

void Seat::cancelSeat() {
isAvailable = true;
cout << "Seat " << seatNumber << " is now available." << endl;
}

void Seat::displaySeatInfo() {
cout << "Seat Number: " << seatNumber << endl;
cout << "Seat Type: " << seatType << endl;
cout << "Status: " << (isAvailable ? "Available" : "Booked") << endl;
}

