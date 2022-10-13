#include <iostream>

using namespace std;


int main()
{
    //variables
    float a, b, h;
    float A;
    string answer = "Yes";

    do
    {

    //to compute for area of trapezoid
    cout<<"Enter base a : ";
    cin>>a;
    cout<<"Enter base b : ";
    cin>>b;
    cout<<"Enter h : ";
    cin>>h;
    A = (a+b)/2*h;
    cout<<"The area of trapezoid is "<<A;
    cout<<"\n";

    //Ask the user if he/she wants to try again
    cout<<"Try again? Yes/No?";
    cout<<"\n";
    cin>>answer;

    //Confirmation to repeat or not
    } while(answer == "Yes");

    cout<<"End of Program...";
    cout<<"\n";
}
