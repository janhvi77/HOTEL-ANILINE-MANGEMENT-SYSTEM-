#include <stdio.h>
#include <string.h>

#define TOTAL_ROOMS 5

int rooms[TOTAL_ROOMS] = {0};


void mainMenu();
void checkIn();
void checkOut();
void bookRoom();
void checkAvailability();
void exitProgram();

// --- Main Function ---
int main() {
    int choice;

    do {
        mainMenu();
        printf("Enter your choice: ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                checkIn();
                break;
            case 2:
                checkOut();
                break;
            case 3:
                bookRoom();
                break;
            case 4:
                checkAvailability();
                break;
            case 5:
                exitProgram();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 5);

    return 0;
}

// --- Menu Display ---
void mainMenu() {
    printf("--------- WELCOME TO HOTEL ANILINE ---------\n");
    printf("1. Check In\n");
    printf("2. Check Out\n");
    printf("3. Book Room\n");
    printf("4. Check Room Availability\n");
    printf("5. Exit\n");
}

// --- Check-in Function ---
void checkIn() {
    char name[50];
    int id;
    char idType[30];
    char address[100];

    printf("\n--- Check In ---\n");
    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your ID type (e.g., pan card or Aadhar): ");
    scanf(" %[^\n]", idType);

    printf("Enter your ID number: ");
    scanf("%d", &id);
    while (getchar() != '\n');

    printf("Enter your address: ");
    scanf(" %[^\n]", address);

    printf("\nCheck-in successful.\n");
    printf("Name: %s\nID Type: %s\nID Number: %d\nAddress: %s\n", name, idType, id, address);
}

// --- Room Booking Function ---
void bookRoom() {
    int roomType;
    int noOfDay;
    int costPerDay = 0;
    int totalBill;
    int roomAssigned = -1;

    printf("\n----- BOOK ROOM -----\n");
    printf("Select Room Type:\n");
    printf("1. Single Room (₹1000/day)\n");
    printf("2. Double Room (₹1800/day)\n");
    printf("3. One Night stay (₹500/night)\n");
    printf("Enter your choice: ");
    scanf("%d", &roomType);

    printf("Enter number of days to stay: ");
    scanf("%d", &noOfDay);

    if (noOfDay <= 0) {
        printf("Invalid duration entered.\n");
        return;
    }

    // Determine cost per day
    if (roomType == 1)
        costPerDay = 1000;
    else if (roomType == 2)
        costPerDay = 1800;
    else if (roomType == 3)
        costPerDay = 500;
    else {
        printf("Invalid room type selected.\n");
        return;
    }

    // Assign a room
    for (int i = 0; i < TOTAL_ROOMS; i++) {
        if (rooms[i] == 0) {
            rooms[i] = 1;
            roomAssigned = i + 1;
            break;
        }
    }

    if (roomAssigned == -1) {
        printf("Sorry, no rooms are available right now.\n");
        return;
    }

    totalBill = noOfDay * costPerDay;

    printf("\n--- BOOKING SUMMARY ---\n");
    if (roomType == 1)
        printf("Room Type: Single Room\n");
    else if (roomType == 2)
        printf("Room Type: Double Room\n");
    else
        printf("Room Type: One Night Room\n");

    printf("Assigned Room Number: %d\n", roomAssigned);
    printf("Duration: %d day(s)\n", noOfDay);
    printf("Total Bill: ₹%d\n", totalBill);
    printf("Booking successful!\n");
}

// --- Check-Out Function ---
void checkOut() {
    int roomNumber;
    printf("\n--- Check Out ---\n");
    printf("Enter your room number to check out: ");
    scanf("%d", &roomNumber);

    if (roomNumber < 1 || roomNumber > TOTAL_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }

    if (rooms[roomNumber - 1] == 1) {
        rooms[roomNumber - 1] = 0;
        printf("Room %d has been checked out and is now available.\n", roomNumber);
    } else {
        printf("Room %d is already available or was not booked.\n", roomNumber);
    }
}


void checkAvailability() {
    printf("\n--- Room Availability ---\n");
    for (int i = 0; i < TOTAL_ROOMS; i++) {
        printf("Room %d: %s\n", i + 1, rooms[i] == 0 ? "Available" : "Booked");
    }
}



void exitProgram() {
    printf("\nThank you for visiting Hotel Aniline. Goodbye!\n");
}