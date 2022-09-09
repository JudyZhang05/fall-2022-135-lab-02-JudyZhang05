/*
 * Author: Judy Zhang
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Task C. Using arrays to store, update, and retrieve numbers. LAB2C
 * Program creates an array of 10 integers and provides the user with an interface to edit any of its elements
 */
#include <iostream>
using namespace std;

int main() {
	int myData[10]; int i; int v;

	for ( int n = 0; n < 10; n++){
		myData[n] = 1;
		cout << myData[n] << " ";
	}
	cout << endl;
	do{
		cout << "Input index: ";
		cin >> i;
		cout << "Input value: ";
		cin >> v;
		if (( 0 <= i ) && ( i < 10)){
			myData[i] = v;
			for (int n = 0; n < 10; n++){
				cout << myData[n] << " ";
			}
			cout << endl;
		}
		else{
			cout << "Index out of range. Exit." << endl;
		}
	}while (( 0 <= i ) && ( i < 10 ));
	return 0;
}
