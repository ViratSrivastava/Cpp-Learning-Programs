#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout <<"Would you like to tell me you name. ";
    getline(cin,name);
    cout << "Nice to meet you "<<name<<endl<<"Greatings of the Day.";
    // use <<endl<< to end the current line and print the output after this in an new line
    return 0;
}