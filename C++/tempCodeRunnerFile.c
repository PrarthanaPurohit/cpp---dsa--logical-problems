#include <stdio.h>
#include <string.h>


#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    int available;
};

struct Book library[MAX_BOOKS];
int numBooks = 0;

void addBook() {
    if (numBooks < MAX_BOOKS) {
        struct Book newBook;
        printf("Enter book title: ");
        gets(newBook.title); 
        printf("Enter author: ");
        gets(newBook.author);
        newBook.available = 1;
        library[numBooks] = newBook;
        numBooks++;
        printf("Book added to the library successfully!\n");
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

void searchBook() {
    char searchTitle[100];
    printf("Enter the title of the book you want to search for: ");
    gets(searchTitle);

    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(library[i].title, searchTitle) == 0) {
            found = 1;
            printf("Book found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            if (library[i].available) {
                printf("This book is available for borrowing.\n");
            } else {
                printf("This book is currently checked out.\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Book not found in the library.\n");
    }
}

void borrowBook() {
    char borrowTitle[100];
    printf("Enter the title of the book you want to borrow: ");
    gets(borrowTitle);

    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(library[i].title, borrowTitle) == 0) {
            found = 1;
            if (library[i].available) {
                library[i].available = 0;
                printf("You have successfully borrowed the book: %s\n", library[i].title);
            } else {
                printf("This book is currently checked out by someone else.\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Book not found in the library.\n");
    }
}

int main() {
    int choice;
    while (1) {
        clrscr(); // Clear the screen
        printf("\nLibrary Management System\n");
        printf("1. Add a book\n");
        printf("2. Search for a book\n");
        printf("3. Borrow a book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\nPress any key to continue...");
        getch(); // Wait for a key press
    }

    return 0;
}