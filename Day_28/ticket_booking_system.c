#include <stdio.h>
struct Ticket
{
    char name[50];
    int seatNo;
};
int main()
{
    struct Ticket t[100];
    int totalSeats = 10;
    int bookedSeats = 0;
    int choice;
    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Bookings\n");
        printf("3. Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(bookedSeats < totalSeats)
                {
                    printf("Enter Passenger Name: ");
                    scanf(" %s", t[bookedSeats].name);
                    t[bookedSeats].seatNo = bookedSeats + 1;
                    printf("Ticket Booked Successfully!\n");
                    printf("Seat Number: %d\n", t[bookedSeats].seatNo);
                    bookedSeats++;
                }
                else
                {
                    printf("Sorry! All seats are booked.\n");
                }
                break;
            case 2:
                if(bookedSeats == 0)
                {
                    printf("No tickets booked yet.\n");
                }
                else
                {
                    printf("\nBooking Details:\n");

                    for(int i = 0; i < bookedSeats; i++)
                    {
                        printf("\nPassenger Name : %s\n", t[i].name);
                        printf("Seat Number    : %d\n", t[i].seatNo);
                    }
                }
                break;
            case 3:
                printf("Available Seats: %d\n",
                       totalSeats - bookedSeats);
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}