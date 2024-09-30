#include <iostream>
using namespace std;
int main()
{
    float basic_salary,allowence,deduction,net_salary;
    
    cout<<"Enter Basic Salary"<<endl;
    cin>>basic_salary;
    cout<<"Enter Allowance Percentage"<<endl;
    cin>>allowence;
    cout<<"Enter Deduction Percentage"<<endl;
    cin>>deduction;
    net_salary=basic_salary+(((basic_salary*allowence)/100)-((basic_salary*deduction)/100));
    cout<<"Net Salary is "<<net_salary<<endl;
    return 0;
}