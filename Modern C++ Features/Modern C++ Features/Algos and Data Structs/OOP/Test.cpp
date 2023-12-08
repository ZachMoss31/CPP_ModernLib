#include <iostream>
#include <string>
#include "Log.h"
#include "Shape.h"

#define IF if(
#define ENDIF )

//Questions::
	//How to check the type of a template 'T' in C++? i.e., is it a string?
	//Lambdas and assigning functions to vars
	//Static and extern vars

//Continued in OpenGL::
	//Currently at 'Hello Window'


void Log(const char* message){
	std::cout << message << std::endl;
}

int SquareNum(int& num) {
	std::cout << "Squareing the number {" << num << "}.\n";
	return (num*=num);
}


int main(int argc, char* argv[]) {
	//Logger logger;
	//DeLogger delogger;




	//Heap Stuff
	Rectangle* box = new Rectangle("myBox");
	std::cout << "The box name is ";
	PrintShape(box);
	std::cout << std::endl;
	delete box;






	if (argc > 1) {
		std::cout << "The arg count is " << argc << ", " << (argc -1) << " more than .exe...." << std::endl;
		for (int i = 1; i < argc; i++) {
			Log(argv[i]);
			std::cout << std::endl;
		}
	}
	
	int x = 5;
	int y = ++x;
	int* xptr = &x;
	*xptr = 2;
	bool comparisonOperatorOverload = x == 5;

	std::cout << "The address of x is " << xptr << " and it is " << *xptr << std::endl;
	std::cout << "{x} is now " << x << " and {y} is " << y << std::endl;

	std::string msg = (comparisonOperatorOverload) ? "True\n" : "False\n";
	std::cout << msg;

	bool testComparisonOverload = x < 5;
	IF testComparisonOverload ENDIF
		std::cout << "Success!\n";

	int i = 0;
	//for(variable dec; condition on looping; execute each for loop at end){}
	for (; i < 5; std::cout << ++i) { std::cout << std::endl; }
	std::cout << std::endl;
	std::cout << SquareNum(x) << std::endl;

	auto f = [=]() mutable {
		std::cout << "Before lambda " << i << std::endl;
		i++;
		std::cout << "After lambda " << i << std::endl;
	};
	f();

	//Strings 
	std::string message = "Zach";
	for (auto& ch : message) {
		if (ch == 'a')
			ch = 'i';
		else if (ch == 'h')
			ch = 'k';
	}
	message += " Moss";
	std::cout << message << std::endl;


	std::cin.get();
}