#include<iostream>
using namespace std;
int main()
{
    float annualSalary,monthlySalary;
    cout<< "Please enter your annual salary ";
    cin>> annualSalary;
    monthlySalary = annualSalary/12;
    cout<<"Your monthly salary is : "<<monthlySalary << endl;
    cout<<"In 10 Years you will earn "<<annualSalary*10;

}