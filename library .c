// c program 
/*
Name:moses
reg:CT100/G/26258/25


*/

// Description: This program allows the librarian to enter the title

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100];
    char choice;

    fp = fopen("borrowed_books.txt", "a"); // open for appending
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        fflush(stdin);
        gets(title); // for simplicity in assignments

        fprintf(fp, "%s\n", title);
        printf("Book title saved successfully.\n");

        printf("Add another book? (y/n): ");
        scanf(" %c", &choice);
        getchar();

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All records saved to borrowed_books.txt\n");

    return 0;
}