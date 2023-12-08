#include <iostream>
#include <string>

//C++ interface
class Shape
{
public:
	virtual std::string GetName() = 0;
};

class Rectangle : public Shape {
public:
	Rectange() = delete;
	Rectangle(const std::string& name) : m_Name(name) {
		std::cout << "Rectangle created.\n";
	}
	~Rectangle();
	std::string GetName() override {
		return m_Name;
	}
private:
	std::string m_Name;
};

Rectangle::~Rectangle(){
	std::cout << "\nRectangle deleted.\n";
}

void PrintShape(Shape* shape) {
	std::cout << shape->GetName();
}