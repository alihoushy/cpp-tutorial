#include <iostream>

using namespace std;

class Document
{
    // Access Specifier (private, public or protected)
    // Defines the level of access to the class’s data members
private:
    string content;
    string title;

public:
    // Default constructor
    Document() : title("Untitled"), content("Empty")
    {
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Document(const string& title, const string& content)
        : title(title), content(content)
    {
        cout << "Parameterized constructor called.\n";
    }

    // Copy constructor
    Document(const Document& other)
        : title(other.title), content(other.content)
    {
        cout << "Copy constructor called.\n";
    }

    // Move constructor
    Document(Document&& other) noexcept
        : title(std::move(other.title)), content(std::move(other.content))
    {
        cout << "Move constructor called.\n";
        other.title = "Moved";
        other.content = "Moved";
    }

    // Destructor
    ~Document() {
        std::cout << "Destructor called for Document with title: " << title << "\n";
    }

    // Display method
    void display() const
    {
        cout << "Title: " << title << "\nContent: " << content << "\n";
    }
};

void runClassExamples()
{
    // Default constructor
    Document doc1;
    doc1.display();

    // Parameterized constructor
    Document doc2("Project Plan", "This is the project plan content.");
    doc2.display();

    // Copy constructor
    Document doc3 = doc2;
    doc3.display();

    // Move constructor
    Document doc4 = std::move(doc2);
    doc4.display();
    doc2.display(); // doc2's content has been moved
}
