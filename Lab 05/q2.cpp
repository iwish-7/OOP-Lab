 #include <iostream>
using namespace std;

int larger(int a, int b)
{
	return (a > b) ? a : b;
}

double larger(double a, double b)
{
	return (a > b) ? a : b;
}

int larger(int a, int b, int c)
{
	return larger(larger(a, b), c);
}

int main()
{
	int a, b, c;
	double x, y;

	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "Larger integer: " << larger(a, b) << endl;

	cout << "Enter two floating-point numbers: ";
	cin >> x >> y;
	cout << "Larger floating-point number: " << larger(x, y) << endl;

	cout << "Enter three integers: ";
	cin >> a >> b >> c;
	cout << "Larger integer: " << larger(a, b, c) << endl;

	return 0;
}
