#include <iostream>
using namespace std;
double const LITER = 0.264179;
double mpg(int ml, int lt);

int main()
{
    char loop;
    int lt, ml;
    do
    {
        cout << "Enter the number of Liters of gasoline:";
        cin >> lt;
        cout << "Enter the number of miles traveled by the car: ";
        cin >> ml;
        if (lt < 0 || ml < 0)

        {
            cout << "All inputs must be above 0." << endl;
            cout << "Please try again, enter 'Y' or 'y': ";
            cin >> loop;
        }
        else
        {
            cout << "Number of miles per gallon:" << mpg(ml, lt) << endl;
            cout << "To continue, then enter 'Y':";
            cin >> loop;
        }
    } while (loop == 'y' || loop == 'Y');
    return 0;
}
double mpg(int m, int l)
{
    double gallons;
    gallons = LITER * l;
    return (m / gallons);
}
