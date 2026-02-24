#include <iostream>
using namespace std;
class library
{
private:
    string name;
    string author;
    int id;
    int copy;

public:
    void addBook(string bname, string bauthor, int bid, int bcopy)
    {
        name = bname;
        author = bauthor;
        id = bid;
        copy = bcopy;
    }
    void dispData()
    {
        cout << "\nName: " << name << endl
             << "Author: " << author << endl
             << "Id: " << id << endl
             << "No.of Copies: " << copy << endl;
    }
    void issueBook(int date)
    {
        copy--;
        cout << "Book issued successfully";
        if (date > 16)
        {
            date -= 16;
            cout << "\nReturn Date: " << date;
        }
        else
        {
            cout << "\nReturn Date: " << date + 14;
        }
    }
    void returnBook()
    {
        copy++;
        cout << "Book retuned successfully" << endl;
    }
    void dispTotal()
    {
        cout << "\nCopy available now: " << copy << endl;
    }
    void searchBook(string sname)
    {
        if (sname == name || sname == author)
        {
            cout << "Book found :: Book id: " << id << endl;
        }
    }
};
int main()
{
    library b1, b2;
    b1.addBook("Harry Potter", "J.K. Rowling", 1, 12);
    b1.dispData();
    b1.issueBook(24);
    b1.dispTotal();
    b1.returnBook();
    b2.addBook("Fire of Wings", "A.P.J. Abdul Kalam", 2, 24);
    b2.issueBook(12);
    b2.dispData();
    b1.searchBook("Harry Potter");
    b2.searchBook("A.P.J. Abdul Kalam");
    return 0;
}