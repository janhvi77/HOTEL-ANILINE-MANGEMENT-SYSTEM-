#HOTEL-ANILINE-MANGEMENT-SYSTEM-
A simple C-based hotel management system for booking rooms, managing check-ins/check-outs, and tracking room availability.
 Hotel Aniline - Basic Hotel Management System in C

📌 Problem Statement

Managing a small hotel manually can lead to mismanagement of bookings, customer details, and room availability. This project addresses the need for a simple, terminal-based hotel room management system that allows efficient room booking, check-ins, check-outs, and availability tracking.

👨‍💻 Developer's Perspective

As a budding programmer exploring the fundamentals of C programming, I wanted to create a real-world application that implements concepts like arrays, conditional statements, loops, string handling, and menu-driven logic. The goal was to design a clean, user-interactive system while learning practical software design.

🛠 Tools & Technologies Used

Language: C

Compiler: GCC

IDE/Editor: Any standard C editor (e.g., Code::Blocks, Visual Studio Code, Turbo C++)

Platform: CLI (Command Line Interface)


🚦 How It Works

The system is menu-driven and allows the user to perform the following operations:

1. Check In

Collects guest details like name, ID type, ID number, and address.

Displays a confirmation message.



2. Book Room

Offers room types: Single, Double, and One-Night Stay.

Calculates total cost based on duration and assigns the next available room.



3. Check Out

Frees up the assigned room number.

Confirms successful check-out or handles invalid requests.



4. Check Room Availability

Displays the availability status (Booked/Available) of all rooms.



5. Exit

Gracefully exits the program with a thank-you message.




Internally, it uses a rooms[] array to track room status (0 = available, 1 = booked), ensuring real-time updates based on user actions.

🌱 Future Scope

🔒 Add login system for admin access.

📝 Store customer details in files or a database.

🗃️ Integrate booking history and billing receipts.

📱 Develop a graphical user interface (GUI) using C++/Java or link to a mobile app.

📊 Add room type analytics or occupancy rates.
