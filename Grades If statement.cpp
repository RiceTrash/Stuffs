/*Write a program that asks for the raw score in a 50 item midterm exam and compute for the percentage grade using the form
grade
*/

#include <iostream>
using namespace std;

int main() {
    int score;
    float grade;
    cout << "Input the midterm raw score: ";
    cin >> score;
    grade = score / 50.0 * 100;
    if (grade >= 95)
        cout << "Excellent";
    else if (grade >= 90)
        cout << "Very Good!";
    else if (grade >= 80)
        cout << "Good!";
    else if (grade >= 75)
        cout << "Fair!";
    else
        cout << "Needs Improvement!";



    { cout << "INVALID SCORE: Your score must be within the range of 0 to 50.";
    cout << "End of program"; }
    return 0;
}
