// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program count how many are occupied and vacant in floor

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0));  // For random values

    // Fill with random data
    for(floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
            if (occupancy[floor][room] == 1)  occupied++;
  else
                vacant++;  }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}


    