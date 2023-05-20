//There are 5 passengers in a train, enter their name, age,  gender and alot seat number ( 1 up number) and print their tickets
#include <stdio.h>
// Define a structure for passenger information
struct Passenger {
    char name[50];
    int age;
    char gender[10];
    int seatNumber;
};

int main() {
    int i, count = 1;

    // Create an array of Passenger structures to store information for 5 passengers
    struct Passenger passengers[5];

    // Input passenger information and assign seat numbers
    for (i = 0; i < 5; i++) {
        printf("Enter details for Passenger %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", passengers[i].name);

        printf("Age: ");
        scanf("%d", &passengers[i].age);

        printf("Gender: ");
        scanf("%s", passengers[i].gender);

        passengers[i].seatNumber = count;
        count++;
    }

    // Print tickets for each passenger
    printf("\nTickets:\n");
    for (i = 0; i < 5; i++) {
        printf("Passenger %d:\n", i + 1);
        printf("Name: %s\n", passengers[i].name);
        printf("Age: %d\n", passengers[i].age);
        printf("Gender: %s\n", passengers[i].gender);
        printf("Seat Number: %d\n", passengers[i].seatNumber);
        printf("\n");
    }

    return 0;
}
