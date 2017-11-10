
#include "List.h"
#include "Node.h"
#include "LinkedListOfInts.h"
#include "tester.h"

#include <iostream>
#include <fstream>

tester :: tester() {
}

void tester :: run() {

	//tests isEmpty()
  if(isEmptyTest()) {
		std::cout << "All isEmpty() tests: PASSED \n";
	}
	else {
		std::cout << "One or more isEmpty() tests: FAILED \n";
	}

	//tests size()
	if(sizeTest()) {
		std::cout << "All size() tests: PASSED \n";
	}
	else {
		std::cout << "One or more size() tests: FAILED \n";
	}

	//tests search()
	if(searchTest()) {
		std::cout << "All search() tests: PASSED \n";
	}
	else {
		std::cout << "One or more search() tests: FAILED \n";
	}

	//tests addBack()
	if(addBackTest()) {
		std::cout << "All addBack() tests: PASSED \n";
	}
	else {
		std::cout << "One or more addBack() tests: FAILED \n";
	}

	//tests addFront()
	if(addFrontTest()) {
		std::cout << "All addFront() tests: PASSED \n";
	}
	else {
		std::cout << "One or more addFront() tests: FAILED \n";
	}

	//tests removeBack()
	if(removeBackTest()) {
		std::cout << "All removeBack() tests: PASSED \n";
	}
	else {
		std::cout << "One or more removeBack() tests: FAILED \n";
	}

	//tests removeFront()
	if(removeFrontTest()) {
		std::cout << "All removeFront() tests: PASSED \n";
	}
	else {
		std::cout << "One or more removeFront() tests: FAILED \n";
	}
}

bool tester :: isEmptyTest() {
	bool pass = true;

  LinkedListOfInts list1;
  LinkedListOfInts list2;
	//new list is empty
	if(list1.isEmpty()) {
		std::cout << "Test 1: size of empty list is zero: PASSED \n";
	}
	else {
		std::cout << "Test 1: size of empty list is zero: FAILED \n";
		pass = false;
	}

	//list that isn't empty
	list1.addFront(1);
	if(!list1.isEmpty()) {
		std::cout << "Test 2: size of empty list is one: PASSED \n";
	}
	else {
		std::cout << "Test 2: size of empty list is one: FAILED \n";
		pass = false;
	}

	//list that isn't empty
	list2.addFront(1);
	list2.addFront(1);
	list2.removeBack();
	list2.removeBack();
	if(list2.isEmpty()) {
		std::cout << "Test 3: size of empty list is zero: PASSED";
	}
	else {
		std::cout << "Test 3: size of empty list is zero: FAILED";
		pass = false;
	}

	return pass;
}

bool tester :: sizeTest() {
	bool pass = true;

	return pass;
}

bool tester :: searchTest() {
	bool pass = true;

	return pass;
}

bool tester :: addBackTest() {
	bool pass = true;

	return pass;
}

bool tester :: addFrontTest() {
	bool pass = true;

	return pass;
}

bool tester :: removeBackTest() {
	bool pass = true;

	return pass;
}

bool tester :: removeFrontTest() {
	bool pass = true;

	return pass;
}
