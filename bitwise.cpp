#include <iostream>
/**
* my first code in c++
* main - prints the bitwise operators
* @ a and b integers to be manipulated
*/

using namespace std;

int main ()
{
     int a = 5, b = 9;
    cout << "my first code in c++\n";
    cout << "a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << "hey" << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "b << 1" << " = " << (b << 1) <<endl;
    cout << "b >> 1" << " = " << (b >> 1) <<endl;
    cout << "a >> 1" << " = " << (a >> 1) <<endl;
    cout << "a << 1" << " = " << (a << 1) <<endl;
    return 0;
}
