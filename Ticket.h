#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include "Seat.h"
using namespace std;

class Ticket {
private:
int ticketID;
string movieName;
string showTime;
Seat seat;
double price;

public:
Ticket(int id, string movie, string time, Seat s, double p);
int getTicketID();
double getPrice();
void displayTicket();
};

#endif
