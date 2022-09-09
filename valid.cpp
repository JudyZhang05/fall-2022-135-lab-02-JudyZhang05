/*
 * Author: Judy Zhang
 * Course: CSCI-1135
 * Instructor: Professor Zamasky
 * Assignment: Task A. Input validation. Lab2A
 * Program asks the user for an integer in thr range of 0 to 100, if the number is out of range the 
 * program asks the user to renter until a valid number is input. After a valid value is obtained,
 * the program prints the number squared.
 */
#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Please enter an integer: ";
	cin >> num;
	while (0 > num || 100 < num){
		cout << "Please re-enter: ";
		cin >> num;
	}
	num = num*num;
	cout << "Number squared is " << num << endl;
	return 0;
}