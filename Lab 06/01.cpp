#include <iostream>
using namespace std;

class Distance {
public:
	int feet;
	int inches;

	Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

	Distance operator+(Distance& other){
		int totalInches = inches + other.inches;
		int totalFeet = feet + other.feet + totalInches / 12;
		return Distance(totalFeet, totalInches % 12);
	}
};

int main() {
	Distance distance1(5, 8);
	Distance distance2(3, 7);
    
	Distance result = distance1 + distance2;


	cout << "Result: " << result.feet << " feet "
		 << result.inches << " inches\n";
	return 0;
}
