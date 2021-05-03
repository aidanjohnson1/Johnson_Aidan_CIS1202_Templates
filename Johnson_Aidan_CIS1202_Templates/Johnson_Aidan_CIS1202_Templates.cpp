//Aidan Johnson
//CIS 1202 101
//May 2, 2021
#include <iostream>
using namespace std;

template <class T>
T half(T nonIntValue) //Function definition for double and float values
{
	return (nonIntValue / 2);
}

int half(int); //Function prototype for int values

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}

int half(int intValue)
{
	return static_cast<int>(round((intValue / 2.0))); //Divides the accepted int by 2, then properly rounds the result. Then converts the result to an integer value that can be returned
}