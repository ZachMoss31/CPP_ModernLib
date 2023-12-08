#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <memory>

//#include "vectorz.h"


//g++ -o VecPractice VecPractice.cpp
//g++ -Wall -std=c++17 VecPractice.cpp -o VecPractice

class Vector2
{
public:
	float x, y;
	Vector2(float x, float y) : x(x), y(y) {}

	//Copy Construct
	Vector2(const Vector2& rhs) : x(rhs.x), y(rhs.y) {}

	Vector2 Add(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 operator+(const Vector2& other) const {
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}

	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);
	}

	Vector2 operator=(const Vector2& other){
		this->x = other.x;
		this->y = other.y;
		return *this;
	}

	bool operator==(const Vector2& other) {
		return (this->x == other.x) && (this->y == other.y);
	}

	friend std::ostream& operator<<(std::ostream& stream, const Vector2& other) {

		stream << "(" << other.x << "," << other.y << ")";
		return stream;
	}
};



int main() {


#pragma region Standard Vector and Iteration
	std::vector<int> myVec;
	myVec.reserve(5); //Sets asside 5 memory slots to start cuz I know at least 5 will happen.
	for (; myVec.size() < 5;)
		myVec.emplace_back(0);

	std::cout << "[";
	for (auto it = myVec.begin(); it != myVec.end(); it++) {
		if (it == myVec.end() - 1)
			std::cout << *it;
		else
			std::cout << *it << ", ";
	}
	std::cout << "]\n";
	std::cout << std::endl;

	//Trying out std::begin()
	auto beg = *std::begin(myVec);
	std::cout << "\nstd begin: " << beg << std::endl;

	//Trying out std::to_string()
	std::string myWord = std::to_string(1.2);
	std::cout << myWord << std::endl;
#pragma endregion
#pragma region HeapStuff

	//Notice for heap allocation here i needs to deref and use -> alot.
	std::vector<int>* v = new std::vector<int>;
	v->push_back(0);
	v->push_back(1);
	v->push_back(3);
	(*v)[0] = 2;

	//Trying out std::begin() still
	auto start = *std::begin(*v);
	std::cout << "Heap beginning value: " << start << std::endl;
	for (auto it = v->begin(); it != v->end(); it++) {
		std::cout << *it << " ";
	}
	delete v;

	//Vector stuff trying out assignment and addition, etc.
	Vector2 speed(1, 2);
	Vector2 position(4, 5);
	std::cout << std::endl;
	std::cout << speed << std::endl;
	std::cout << speed + position << std::endl;
	std::cout << speed * position << std::endl;
	speed = position;
	Vector2 accel = speed;
	std::cout << accel << std::endl;

	Vector2* curv = new Vector2(6, 7);
	std::cout << *curv << std::endl;
	delete curv;

	std::cout << (speed == position) << std::endl;
	Vector2 enemy(accel);
	std::cout << enemy << std::endl;


	//Smart Pointing
	//std::unique_ptr<Vector2> velocity = std::make_unique<Vector2>(8,8);
	std::shared_ptr<Vector2> velocity = std::make_shared<Vector2>(7, 7);
	velocity->x = 12;
	std::cout << "Heap Smart ptr address " << velocity << ", holds " << *velocity << std::endl;
#pragma endregion


	std::cin.get();
}