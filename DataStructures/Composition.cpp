//#include <string>
//#include <iostream>
//#include <string>
//
//class Point2D
//{
//private:
//	int m_x;
//	int m_y;
//
//public:
//	// A default constructor
//	Point2D()
//		: m_x(0), m_y(0)
//	{
//	}
//
//	// A specific constructor
//	Point2D(int x, int y)
//		: m_x(x), m_y(y)
//	{
//	}
//
//	// An overloaded output operator
//	friend std::ostream& operator<<(std::ostream& out, const Point2D &point)
//	{
//		out << "(" << point.m_x << ", " << point.m_y << ")";
//		return out;
//	}
//
//	// Access functions
//	void setPoint(int x, int y)
//	{
//		m_x = x;
//		m_y = y;
//	}
//
//};
//class Creature
//{
//private:
//	std::string m_name;
//	Point2D m_location;
//
//public:
//	Creature(const std::string &name, const Point2D &location)
//		: m_name(name), m_location(location)
//	{
//	}
//
//	friend std::ostream& operator<<(std::ostream& out, const Creature &creature)
//	{
//		out << creature.m_name << " is at " << creature.m_location;
//		return out;
//	}
//
//	void moveTo(int x, int y)
//	{
//		m_location.setPoint(x, y);
//	}
//};
//
//int main()
//{
//	std::cout << "Enter a name for your creature: ";
//	std::string name;
//	std::cin >> name;
//	Creature creature(name, Point2D(4, 7));
//
//	while (1)
//	{
//		// print the creature's name and location
//		std::cout << creature << '\n';
//
//		std::cout << "Enter new X location for creature (-1 to quit): ";
//		int x = 0;
//		std::cin >> x;
//		if (x == -1)
//			break;
//
//		std::cout << "Enter new Y location for creature (-1 to quit): ";
//		int y = 0;
//		std::cin >> y;
//		if (y == -1)
//			break;
//
//		creature.moveTo(x, y);
//	}
//
//	return 0;
//}