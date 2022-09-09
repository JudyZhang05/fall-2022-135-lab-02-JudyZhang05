/*
Author: Judy Zhang
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task D. Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13… LAB2D
Program uses an array of ints to compute and print all Fibonacci numbers from 0 to 59
*/
#include <iostream>
using namespace std;

int main()
{
    int fib[60];
    cout << 0 << "\n";
    for ( int i = 1; i < 61; i++){
        fib[0] = 0;
        fib[1] = 1;
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
    }

    return 0;
}
/*
At two billions the fibonacci sequence starts to diverge from what they should be; becoming large negative
numbers and no longer following the fibonacci sequence. What's happening is that c++ is reaching it's value
of INT_MAX which is around 2 billon, thus the numbers are diverging to combat that. */
