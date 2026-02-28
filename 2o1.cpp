#include <iostream>
using namespace std;
class rectangle
{
private:
    double length;
    double width;

public:
    rectangle()
    {
        length = 0;
        width = 0;
    }
    void setData()
    {

        cin >> length >> width;
    }
    void dispData()
    {
        cout << "Length: " << length << endl
             << "Width: " << width << endl;
    }
    double area()
    {
        return length * width;
    }
    double perimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{
    rectangle num[10];
    int choice, index;
    int count = 0;
    do
    {
        cout << "Rectangle System" << endl;
    cout << "1.Add Rectangle\n2.Update Dimensions\n3.Display Rectangle\n4.exit" << endl;
    cout << "Enter your choice: ";
     cin >> choice;
        if (choice == 1)
        {
            if (count >= 10)
            {
                cout << "cant take more input";
            }
            else
            {
                cout << "Enter Length and Width: ";
                num[count].setData();
                num[count].dispData();
                 cout<<"input taken\n";
                count++;
            }
        }
        else if (choice == 2)
        {
            cout << "Enter rectangle number: ";
            cin >> index;
            if (index >= 1 && index <= count)
            {
                cout << "Enter new length and width: ";
                num[index-1].setData();
                num[index-1].dispData();
                cout<<"new input taken\n";
            }
            else
            {
                cout << "Invalid choicr"<<endl;;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter rect no. to display it: ";
            cin>>index;
            if(index<1 && index>10)
            {
cout<<"invalid rectangle number"<<endl;
            }
            else
            {
                num[index-1].dispData();
                cout << "Area: " << num[index-1].area() << endl;
                cout << "Perimeter: " << num[index-1].perimeter() << endl;
            }
        }
        

    } while (choice != 4);
    cout << "Terminated Successfully!!!"<<endl;
    return 0;
}