#include <iostream>

using namespace std; 

int main () {

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

double n;
cin >> n;

int count = 1;
double guess = (n/2);
double r;
while (count++<=5)
{r = n/guess;
guess = (guess + r) / 2.0;}

cout << guess;
   
}