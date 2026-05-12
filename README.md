
Cinema Booking System

A C++ cinema booking system developed as a university project.

Team Members
- Malik Al-Isaee (24-0206)
- Ahmed Al-Sawafi (24-0278)
- Mohammed Said (24-0220)
- Salem Al-Aamri (24-0688)

Features
- Browse available movies
- View showtimes
- Select and book seats
- Purchase tickets
- Admin controls (add/remove movies, update showtimes)

Classes
- Movie – stores movie info (name, duration, genre)
- ShowTime – represents movie showtimes
- Seat – tracks seat availability
- User – base class for all users
- Admin – manages the system (inherits from User)
- Customer – books tickets and views movies (inherits from User)
- Ticket – represents a booked ticket
- Cinema – manages all system operations

How to Run
1. Clone the repository
2. Compile using g++: 'g++ main.cpp -o cinema'
3. Run: './cinema'

Built With: C++

---
