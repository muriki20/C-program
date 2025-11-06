// c program 
/*
Name:moses
reg:CT100/G/26258/25
ddescript:3Darray 
}
*/
#include <stdio.h>



void roomOccupancyMultipleBranches() {
    int chain[3][5][10];
    int total_occupied = 0;

    srand(time(NULL)); // Seed random number generator

    printf("Room Occupancy (Multiple Branches)\n");
    printf("---------------------------------\n");

    // Assign random occupancy to each room across all branches
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 or 1
                total_occupied += chain[branch][floor][room];
            }
        }
    }

    // Display total occupied rooms across all branches
    printf("Total occupied rooms across all branches: %d\n", total_occupied);
}

int main() {
    roomOccupancyMultipleBranches();
    return 0;
}