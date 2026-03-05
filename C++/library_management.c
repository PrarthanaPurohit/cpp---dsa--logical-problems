#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

// Structure to represent a book
struct Book {
    int id;
    char title[100];
    char author[100];
    int isAvailable; // 1 if available, 0 if checked out
};

// Global array to store books
struct Book library[MAX_BOOKS];
int numBooks = 0;

// Function to display all books in the library
void displayBooks() {
    if (numBooks == 0) {
        printf("The library is empty.\n");
        return;
    }
    printf("Book ID\tTitle\tAuthor\tAvailable\n");
    for (int i = 0; i < numBooks; i++) {
        printf("%d\t%s\t%s\t%s\n", library[i].id, library[i].title, library[i].author, library[i].isAvailable ? "Yes" : "No");
    }
}

// Function to add a new book to the library
void addBook() {
    if (numBooks >= MAX_BOOKS) {
        printf("The library is full. Cannot add more books.\n");
        return;
    }
    
    // Increment the number of books
    numBooks++;
    
    // Get book details from the user
    library[numBooks - 1].id = numBooks;
    printf("Enter the title of the book: ");
    scanf(" %[^\n]s", library[numBooks - 1].title);
    printf("Enter the author of the book: ");
    scanf(" %[^\n]s", library[numBooks - 1].author);
    library[numBooks - 1].isAvailable = 1; // Assume the book is available initially
    printf("Book added successfully!\n");
}

// Function to check out a book
void checkoutBook() {
    int bookID;
    printf("Enter the ID of the book you want to check out: ");
    scanf("%d", &bookID);
    
    if (bookID < 1 || bookID > numBooks) {
        printf("Invalid book ID.\n");
        return;
    }
    
    if (library[bookID - 1].isAvailable) {
        library[bookID - 1].isAvailable = 0; // Book is checked out
        printf("You have successfully checked out the book: %s\n", library[bookID - 1].title);
    } else {
        printf("The book is already checked out.\n");
    }
}

// Function to return a book
void returnBook() {
    int bookID;
    printf("Enter the ID of the book you want to return: ");
    scanf("%d", &bookID);
    
    if (bookID < 1 || bookID > numBooks) {
        printf("Invalid book ID.\n");
        return;
    }
    
    if (!library[bookID - 1].isAvailable) {
        library[bookID - 1].isAvailable = 1; // Book is returned
        printf("You have successfully returned the book: %s\n", library[bookID - 1].title);
    } else {
        printf("The book is already available in the library.\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Display All Books\n");
        printf("2. Add a Book\n");
        printf("3. Checkout a Book\n");
        printf("4. Return a Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayBooks();
                break;
            case 2:
                addBook();
                break;
            case 3:
                checkoutBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1); // Infinite loop for the menu

    return 0;
   
    
    

}
