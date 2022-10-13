#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number from 1 to 7: ";
    cin >> day;
    if (day == 1)
        cout << "Monday";
    else if (day == 2)
        cout << "tuesday";
    else if (day == 3)
        cout << "wednesday";
    else if (day == 4)
        cout << "thursday";
    else if (day == 5)
        cout << "friday";
    else if (day == 6)
        cout << "saturday";
    else if (day == 7)
        cout << "sunday";
        
    cout << "\nEnd of program";

        return 0;

}
