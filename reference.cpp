#include <iostream>
using namespace std;

// functiond definition

int reference(int&, int);
int value(int, int);

// main

int main(){
	int x = 1;
	cout << x + x << endl;	
	reference(x, 10); // value changes
	cout << x + x << endl;
	
	x = 1;
	value(x, 5); // value remains unchanged
	cout << x + x << endl;
	
	x = 1;
	reference(x, 5);
	cout << x + x << endl;
}

// passing by reference

int reference (int& value, int new_value){
	value = new_value;
	return value;
}

// passing by value

int value(int value, int new_value){
	value = new_value;
	return value;
}
