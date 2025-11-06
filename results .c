// c program 
/*
Name:moses
reg:CT100/G/26258/25
    // Program: Student Results Record

// Description: This program reads student examination results from
// a binary file (results.dat) and displays their details.
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file or file not found!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %s\n", s.regNo);
        printf("Marks: %.2f\n", s.marks);
        printf("----------------------------\n");
    }

    fclose(fp);
    return 0;
}