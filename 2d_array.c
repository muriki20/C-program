// c program 
/*
Name:moses
reg:CT100/G/26258/25
ddescript:2d array 
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roomOccupancyOneBranch() {
    int occupancy[5][10];
    int occupied_count, vacant_count;

    srand(time(NULL)); // Seed random number generator

    printf("Room Occupancy (One Branch)\n");
    printf("---------------------------\n");

    // Simulate occupancy data
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display occupied and vacant rooms per floor
    for (int floor = 0; floor < 5; floor++) {
        occupied_count = 0;
        vacant_count = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied_count, vacant_count);
    }
}

int main() {
    roomOccupancyOneBranch();
    return 0;
}