//Including the i/o stream to retrieve values and write to the user
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	//Declares all necessary variables
	int roomCap;
	int numAttendees;

	//Retrieves the room capacity value
	cout << "What is the room capacity?" << endl;
	cin >> roomCap;

	//Retrieves the number of attendees to the meeting
	cout << "How many people will attend?" << endl;
	cin >> numAttendees;

	//Checks if the number of attendees is too large for the meeting room
	if (numAttendees <= roomCap) {
		cout << "It is legal to hold this meeting." << endl;
		cout << "You can hold " << (roomCap - numAttendees) << " more people." << endl;
	} else {
		cout << "It is illegal to hold this meeting due to fire regulations." << endl;
		cout << (numAttendees - roomCap) << " people may not come." << endl;
	}

	return 0;
}
