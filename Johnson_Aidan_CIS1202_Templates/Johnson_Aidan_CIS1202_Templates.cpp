//Aidan Johnson
//CIS 1202 101
//May 2, 2021
#include <iostream>
using namespace std;

template <class T>
T half(T) //Function definition for double and float values
{
	return (x / 2);
}

int half(int); //Function prototype for int values

int main()
{




}

int half(int x)
{
	return static_cast<int>(round((x / 2)));
}