//Include the i/o stream for getting values from user and math for computations
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
	//Declaring all the variables used in the program early
	const float ton = 35273.92;
	float boxOz;
	float boxTon;
	float boxesInTon;

	//Retrieving and storing the weight of a single box
	cout << "What is the weight of a box of cereal in ounces?" << endl;
	cin >> boxOz;

	//Calculates and outputs the weight of a single box in tons
	boxTon = boxOz / ton;
	cout << "The weight of a single box in tons is: " << boxTon << endl;

	//Calculates the number of boxes needed to  have a ton of cereal
	boxesInTon = ton / boxOz;
	cout << "The number of boxes needed to have a ton of cereal is: " << boxesInTon << endl;

	return 0;
}
