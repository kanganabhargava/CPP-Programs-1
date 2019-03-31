//#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	float radius;
//public:
//	Circle(float r = 0) : radius(r) { }
//	void changeRadius(int radius) { this->radius = radius; }
//	float getRadius() { return radius; }
//	float getArea() const { return 3.14 * radius * radius; }
//	bool operator==(Circle a);
//};
//
//inline bool Circle::operator==(Circle a)
//{
//	return this->radius == a.radius;
//}
//
//int main()
//{
//	Circle A(10), B(20), C(10);
//
//	cout << "Circle A : Radius = " << A.getRadius() << " units, Area = "
//		<< A.getArea() << " sq. units\n";
//	cout << "Circle B : Radius = " << B.getRadius() << " units, Area = "
//		<< B.getArea() << " sq. units\n";
//	cout << "Circle C : Radius = " << C.getRadius() << " units, Area = "
//		<< C.getArea() << " sq. units\n";
//	cout << "A == B : ";
//	if (A == B)
//		cout << "Circles are equal.\n";
//	else
//		cout << "Circles are not equal.\n";
//	cout << "A == C : ";
//	if (A == C)
//		cout << "Circles are equal.\n";
//	else
//		cout << "Circles are not equal.\n";
//}