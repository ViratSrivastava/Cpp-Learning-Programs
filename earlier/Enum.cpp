#include <iostream>
using namespace std;
enum day {mon,tue,wed,thu,fri,sat,sun};
//datatype value    
//         0   1   2   3   4   5   6
enum dept {cse=1,ece,civil=6,mech};
//datatype value    
//            1   2    5       6
int main()
{
    day d;
    d=wed;
    cout<<d<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;

    dept S;
    S=cse;
    cout<<S<<endl;
    cout<<cse<<endl;
    cout<<ece<<endl;
    cout<<civil<<endl;
    cout<<mech<<endl;

    return 0;
}