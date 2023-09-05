#include <iostream>

using namespace std; 

int main() {

int maxOccupancy; int currentOccupancy; int peopleOverCap;

cout << "Enter the Maximum occupancy for the room." << endl;
cin  >> maxOccupancy;
cout << maxOccupancy << endl << "Enter the number of occupants of the room." << endl;
cin >> currentOccupancy;
cout << currentOccupancy << endl;

peopleOverCap = (currentOccupancy - maxOccupancy);

if (peopleOverCap <= 0)
cout << "The number of occupants does not exceed the legal maximum.";
else
cout << "ATTENTION: MAXIMUM OCCUPANCY EXCEEDED. THE LAW REQUIRES " << peopleOverCap << " PERSONS TO LEAVE THE ROOM IMMEDIATELY";



return 0; 
}

