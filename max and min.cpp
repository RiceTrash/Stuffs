/*
Lab Activity 04 – Selection Structure: If VS Switch
Author: Anthony Marc Huesca
Date: 9/21/2022
Course: BS Computer Science
Address: Secret
Title: Maximum and Minimun between four given numbers.
*/


#include<iostream>
using namespace std;

int main() {

	char option;
	float n1, n2, n3, n4, min, max;
	char choice = 'Y';

	while (choice == 'Y' || choice == 'y') {
		system("cls");
		cout << "\n===========================";
		cout << "\nA - Minimun of 4 numbers\n";
		cout << "\nB - Maximun of 4 numbers\n";
		cout << "\n===========================";
		cout << "\nChoose [A] or [B]: ";
		cin >> option;

		switch (option) {
		case 'A':
		case 'a':
			cout << "\n===========================";
			cout << "\n==Minimum==\n";
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			cout << "Enter third number: ";
			cin >> n3;
			cout << "Enter fourth number: ";
			cin >> n4;
			cout << "\n===========================";
			min = n1;
			switch (n2< min)
			{
			case 1: min = n2; break;
			}
			switch (n3 < min)
			{
			case 1: min = n3; break;
			}
			switch (n4 < min)
			{
			case 1: min = n4; break;
			}
			cout << "\nThe Minimum is: " << min;
			break;
		case 'B':
		case 'b':
			cout << "\n===========================";
			cout << "\n==Maximum==\n";
			cout << "Enter first number: ";
			cin >> n1;
			cout << "Enter second number: ";
			cin >> n2;
			cout << "Enter third number: ";
			cin >> n3;
			cout << "Enter fourth number: ";
			cin >> n4;
			cout << "\n===========================";
			max = n1;
			switch (n2 > max)
			{
			case 1: max = n2; break;
			}
			switch (n3 > max)
			{
			case 1: max = n3; break;
			}
			switch (n4 > max)
			{
			case 1: max = n4; break;
			}
			cout << "\nThe Maximum is: " << max;
			break;
		default:
			cout << "Invalid selection. Please type in A or B only.";
		}

		cout << "\n===========================";
		cout << "\nTry again? [Y/N]: ";
		cin >> choice;

	}



	return 0;
}
