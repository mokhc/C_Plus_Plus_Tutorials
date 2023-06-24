#include <iostream>
#include <string>

using namespace std;

class Fruits {
public:
	string name;
	double price;
	Fruits(string name) {
		this->name = name;
	}

	Fruits(double price) {
		this->price = price;
	}

	Fruits(string name, double price) {
		this->name = name;
		this->price = price;
	}
};
