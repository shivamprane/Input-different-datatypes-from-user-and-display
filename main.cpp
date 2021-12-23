#include<iostream>
using namespace std;

int main()
{
    string name;
    int roll_no;
    char division;
    float marks;
    bool result;

    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter Roll Number: " << endl;
    cin >> roll_no;
    cout << "Enter Division: " << endl;
    cin >> division;
    cout << "Enter marks: " << endl;
    cin >> marks;
    cout << "Enter Result (Pass= 1 & Fail= 0): " << endl;
    cin >> result;

    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll_no << endl;
    cout << "Division: " << division << endl;
    cout << "Marks: " << marks << endl;
    cout << "Result: " << result << endl;
    
    return 0;
}
