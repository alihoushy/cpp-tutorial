#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure to represent a Book
struct Book {
    string title;
    string author;
    int publicationYear;
    string isbn;

    // Function to display book details
    void display() const {
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nPublication Year: " << publicationYear
             << "\nISBN: " << isbn << "\n\n";
    }
};

// Structure to represent a Member of the library
struct Member {
    string name;
    int memberId;
    vector<string> borrowedBooks;

    // Function to display member details
    void display() const {
        cout << "Name: " << name << "\nMember ID: " << memberId
             << "\nBorrowed Books: ";
        if (borrowedBooks.empty()) {
            cout << "None";
        } else {
            for (const string& book : borrowedBooks) {
                cout << book << ", ";
            }
        }
        cout << "\n\n";
    }
};

// Structure to represent a Library
struct Library {
    vector<Book> books;
    vector<Member> members;

    // Function to add a book to the library
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book \"" << book.title << "\" added to the library.\n";
    }

    // Function to add a member to the library
    void addMember(const Member& member) {
        members.push_back(member);
        cout << "Member \"" << member.name << "\" added to the library.\n";
    }

    // Function to display all books in the library
    void displayBooks() const {
        cout << "Books in the Library:\n";
        for (const Book& book : books) {
            book.display();
        }
    }

    // Function to display all members of the library
    void displayMembers() const {
        cout << "Library Members:\n";
        for (const Member& member : members) {
            member.display();
        }
    }
};

void runStructureExample() {
    // Create a library
    Library library;

    // Create some books
    Book book1 = {"The Catcher in the Rye", "J.D. Salinger", 1951, "978-0-316-76948-0"};
    Book book2 = {"1984", "George Orwell", 1949, "978-0-452-28423-4"};
    Book book3 = {"To Kill a Mockingbird", "Harper Lee", 1960, "978-0-06-112008-4"};

    // Create some members
    Member member1 = {"Alice Johnson", 1, {"The Catcher in the Rye"}};
    Member member2 = {"Bob Smith", 2, {}};

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Add members to the library
    library.addMember(member1);
    library.addMember(member2);

    // Display all books in the library
    cout << "\n";
    library.displayBooks();

    // Display all members of the library
    cout << "\n";
    library.displayMembers();
}
