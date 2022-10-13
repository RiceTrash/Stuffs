#include <iostream>
using namespace std;

int main()
{
 int num1, num2, num3, smallest, largest;
 char choice;
 do
 {
    system("cls");
    system("clear");
    cout << " Enter the three numbers :\n";
    cin>>num1>>num2>>num3;

    smallest = num1;
    largest = num2;


    if (num1 < smallest)
    {
        smallest = num1;
    }

    if (num2 < smallest)
    {
        smallest = num2;
    }

    if (num3 < smallest)
    {
        smallest = num3;
    }
    if (num3 > largest)
    {
        largest = num3;
    }

    if (num2 > largest)
    {
        largest = num2;
    }
if (num1 > largest)
    {
        largest = num1;
    }

    cout << "\n The Smallest number among these 3 ( " << num1 << ", " << num2 << ", " << num3 << " ) is : " << smallest;
    cout << "\n The Largest number among these 3 ( " << num1 << ", " << num2 << ", " << num3 << " ) is : " << largest;

    cout<<"\nDo you want to try again press[Y] if not press any key to end the program. ";
    cin>>choice;

    }while(choice=='y'||choice=='Y');



    return 0;
}
