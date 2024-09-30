#include <iostream>
// Use #include <sting> when using getline(cin,'string name'); syntax.
using namespace std;
int main()
{
    string name;
    cout<<"Hey There! Would you like to tell me your name: ";
    cin>>name; //Reads the first word of the string only.
    // getline(cin,name);  ///reads the whole sentence.
    cout<<"Hi "<<name<<" Good to see you";
    return 0;
}