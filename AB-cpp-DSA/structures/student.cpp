#include <iostream>
using namespace std;
struct Student {
    int rollNo;
    string dateofBirth;
    char name[100];
    string department;
    char address[500];
    string email;
    string phoneNumber;
    void display(){
        cout << "----------------------------------" << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Address : " << address << endl;
        cout << "Email ID:" << email << endl;
        cout << "Phone Number : " << phoneNumber << endl;
        cout << "Date of Birth : " << dateofBirth << endl;
        cout << "----------------------------------" << endl;
        cout << "Student Details Updated on : " << __DATE__ << " at " << __TIME__ << endl;
    }
};
int main(){
    Student S1;
    cout << "Enter Roll No: ";
    cin >> S1.rollNo;
    cin.ignore();

    cout << "Enter Name : ";
    cin.getline(S1.name, 100);

    cout << "Enter Department : ";
    getline(cin, S1.department);

    cout << "Enter Address : ";
    cin.getline(S1.address, 500);

    cout << "Enter Email ID: ";
    getline(cin, S1.email);

    cout << "Enter Phone Number : ";
    cin >> S1.phoneNumber;
    cin.ignore();

    cout << "Enter Date of Birth : ";
    getline(cin, S1.dateofBirth);

    S1.display();
    return 0;
}