#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Vector
{
private:
	double x;
	double y;
	double z;
public:
	Vector() : x(0), y(0), z(0) {};
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {};
	void showVec()
	{
		cout << x << " " << y <<" " << z << endl;
	}
	int showVecModule()
	{
		return sqrt(x * x + y * y + z * z);
	}

};


void main()
{
	Vector a(4, 4, 4);
	a.showVec();

	cout << endl;
	cout << "Module of vector = " << a.showVecModule() << endl;
}