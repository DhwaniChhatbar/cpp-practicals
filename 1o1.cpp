#include <iostream>
using namespace std;
class digitalWallet
{
private:
    int id;
    string uname;
    double balance;

public:
    void load_money(double load)
    {
        balance += load;
    }
    void tranfer_money(digitalWallet &x, double amt)
    {
        if (amt > balance)
        {
            cout << "No sufficient balance for transaction." << endl;
        }
        else
        {
            balance -= amt;
            x.balance += amt;
        }
    }
    void display_data()
    {
        cout << "User Id:: " << id << endl
             << "User name:: " << uname << endl
             << "Current Balance:: " << balance << endl;
    }
    void setData(int uid, string name, double bal)
    {
        id = uid;
        uname = name;
        balance = bal;
    }
};
int main()
{
    digitalWallet p1, p2;
    p1.setData(4, "Dhwani", 2500);
    p1.display_data();
    p1.load_money(5000);
    p1.display_data();
    p2.setData(2, "Shreya", 5000);
    p2.display_data();
    p1.tranfer_money(p2, 10000);
    p2.display_data();
    p1.display_data();
    return 0;
}