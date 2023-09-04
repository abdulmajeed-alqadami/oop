
#include <iostream>

using namespace std;
//#include <string>
#include <ctime>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;
    bool available;

public:

    Book() : title(""), author(""), publicationYear(0), available(true) {}
    void setDetails(std::string title, std::string author, int year) {
        this->title = title;
        this->author = author;
        this->publicationYear = year;
    }


    void checkOut() {
        available = false;
    }


    void checkIn() {
        available = true;
    }


    void displayStatus() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
        if (available) {
            std::cout << "Availability: Available" << std::endl;
        } else {
            std::cout << "Availability: Checked Out" << std::endl;
        }
    }


    bool isClassic() {
        int currentYear = static_cast<int>(std::time(nullptr)) / 60 / 60 / 24 / 365;
        return (currentYear - publicationYear) > 50;
    }
};

int main() {
    Book myBook;
    myBook.setDetails("To Kill a Mockingbird", "Harper Lee", 1960);
    myBook.displayStatus();

    if (myBook.isClassic()) {
        std::cout << "This book is a classic." << std::endl;
    } else {
        std::cout << "This book is not a classic." << std::endl;
    }

    myBook.checkOut();
    myBook.displayStatus();

    myBook.checkIn();
    myBook.displayStatus();

    return 0;
}
