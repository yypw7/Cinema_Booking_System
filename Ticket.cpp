#include "Ticket.h"

Ticket::Ticket(int id, string movie, string time, Seat s, double p)
: seat(s) {
ticketID = id;
movieName = movie;
showTime = time;
price = p;
}

int Ticket::getTicketID() {
return ticketID;
}

double Ticket::getPrice() {
return price;
}

void Ticket::displayTicket() {
cout << "\n===== Ticket Details =====" << endl;
cout << "Ticket ID: " << ticketID << endl;
cout << "Movie Name: " << movieName << endl;
cout << "Show Time: " << showTime << endl;
cout << "Seat Number: " << seat.getSeatNumber() << endl;
cout << "Seat Type: " << seat.getSeatType() << endl;
cout << "Price: " << price << " OMR" << endl;
}