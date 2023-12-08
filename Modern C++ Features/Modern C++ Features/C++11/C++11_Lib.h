#include <string>
#include <array>
#include <tuple>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <memory>
#include <thread>
#include <chrono>
#include <iostream>

/*C++ 11 was the first "Modern C++" release, put out in August of 2011.
	- It is the largest of the modern C++ releases, having the most features and library updates
*/

namespace C11 {

	void StringMethod() {
		std::cout << "-------------- STRINGS --------------\n";
		std::cout << "Enter a test num: ";
		int num = 0;
		std::cin >> num;

		//This is included in string
		std::cout << std::to_string(num + num) + " is your num added together." << std::endl;
		std::cout << std::to_string(double(num)) << " is your num cast to string from double." << std::endl;
		std::cout << std::to_string(float(num)) << " is your num cast to string from float." << std::endl;
	}

	void SmartPointerMethod(std::string* word) {
		//SMART POINTERS
		//Unique std::unique_ptr<type>
		//  Only one owner at any given time (owner, meaning that which cleans up the object).
		//	It deletes what it points to whenever it goes out of scope / deletes.
		//  The unique ptr is c++'s simplest smart ptr.
		//int* xp = new int(42); vanilla pointer

		std::cout << "The word is " << word << std::endl;
	}

	void TestFunc() {

		//std::thread()
			//CHRONO

			//Tuples
		std::tuple<std::string, int, int> myTup;
		//Does c++ support tuple unpacking?
		std::string word;

		//int x, y;
		//word, x, y, = mytup;

		std::string name = std::get<0>(myTup);

		//std::tie
		std::array<int, 5> testArray;


		//UNORDERED CONTAINERS

	//Sets
		std::set<int> mySet;
		mySet.insert(5);
		mySet.insert(6);
		mySet.insert(5);

		for (auto var : mySet)
		{
			std::cout << var << std::endl;
		}

		//std::unordered_set
		//std::unordered_multiset

		//std::map
		//std::unorderded_map
		//std::unordered_multimap

			//SHARED / SMART POINTERS
		//std::make_shared<int>()
		//std::make_unique<int>()


			//REF
		//std::ref()

			//MEMORY MODEL

		//std::async, std::future
		//std::begin(), std::end()


		//Misc Language Features

		//Static Asserts and Type Traits
		//This is included in language:
			//- Stops compiling if certain conditions are not met
			//- C++11 allows us to use Type Trait checking for that particular variable test.
			//- These are not 'if' statements as they are effectively testing only in our code,
				//so if I was passed 'Class A' and 'Class B', I could get a boolean of is_same<A,B>::value.
				//static_assert(std::is_integral<int>::value);

		std::cin.get();
	}
}