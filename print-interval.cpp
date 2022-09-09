/*
 * Author: Judy Zhang
 * Course: CSCI-135
 * Instructor: Professor Zamansky
 * Assignment: Task B. Print all integers from the requested interval. Lab2B
 * Program asks user for 2 integers and prints out all integers in the range with space.
 */
#include <iostream>
using namespace std;

int main(){
	int L; int U;
	cout << "Please enter L: ";
	cin >> L;
	cout << "Please enter U: ";
	cin >> U;

	for (int i = L; i < U; i++) {
		cout << i << " ";
	}
	return 0;
}
