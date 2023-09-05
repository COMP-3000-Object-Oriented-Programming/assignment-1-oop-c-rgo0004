#include <iostream>

using namespace std; 

int main (){

int time;

cout << "Enter a time in seconds." << endl;
cin >> time;

double dist;
dist = (16)*(time*time);

cout << "An object in freefall for " << time <<" seconds will fall " << dist << " feet.";

    
}