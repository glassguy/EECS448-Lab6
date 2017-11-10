
#include "tester.h"

#include <iostream>
#include <fstream>
#include <string>

void tester :: run() {

	std::cout << "STARTING TESTS...\n\n";
	//tests isEmpty()
	if(isEmptyTest()) {
		std::cout << "All isEmpty() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more isEmpty() tests: FAILED \n\n";
	}
	
	//tests size()
	if(sizeTest()) {
		std::cout << "All size() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more size() tests: FAILED \n\n";
	}
	
	//tests search()
	if(searchTest()) {
		std::cout << "All search() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more search() tests: FAILED \n\n";
	}
	
	//tests addBack()
	if(addBackTest()) {
		std::cout << "All addBack() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more addBack() tests: FAILED \n\n";
	}
	
	//tests addFront()
	if(addFrontTest()) {
		std::cout << "All addFront() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more addFront() tests: FAILED \n\n";
	}
	
	//tests removeBack()
	if(removeBackTest()) {
		std::cout << "All removeBack() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more removeBack() tests: FAILED \n\n";
	}
	
	//tests removeFront()
	if(removeFrontTest()) {
		std::cout << "All removeFront() tests: PASSED \n\n";
	}
	else {
		std::cout << "One or more removeFront() tests: FAILED \n\n";
	}
	std::cout << "FINISHED TESTS...\n\n";
}

bool tester :: isEmptyTest() {
	bool pass = true;

	LinkedListOfInts list1;
	list1.addFront(2);
	std::vector<int> vect = list1.toVector();
	
	if(list1.isEmpty()) {
		std::cout << "	- Test 1: size is 1 and isEmpty returns false: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list2;
	std::vector<int> vect2 = list2.toVector();
	
	if(!list2.isEmpty()) {
		std::cout << "	- Test 2: size is 0 and isEmpty returns true: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list3;
	list3.addFront(2);
	list3.addFront(4);
	list3.addFront(6);
	list3.addFront(8);
	list3.addFront(10);
	std::vector<int> vect3 = list3.toVector();
	int size3 = vect3.size();
	
	if(list3.isEmpty()) {
		std::cout << "	- Test 3: size is " << size3 << " isEmpty returns false: FAILED \n";
		pass = false;
	}
	
	return pass;
}

bool tester :: sizeTest() {
	bool pass = true;

	LinkedListOfInts list1;
	std::vector<int> vect = list1.toVector();
	int size = vect.size();
	
	if(list1.size() != size) {
		std::cout << "	- Test 1: size of list and vector are equal when empty: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list2;
	list2.addFront(4);
	std::vector<int> vect2 = list2.toVector();
	int size2 = vect2.size();
	
	if(list2.size() != size2) {
		std::cout << "	- Test 2: size of list and vector are equal when they have one element: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list3;
	list3.addFront(4);
	list3.addFront(8);
	list3.addFront(12);
	list3.addFront(16);
	list3.addFront(20);
	list3.addFront(4);
	list3.addFront(8);
	list3.addFront(12);
	list3.addFront(16);
	list3.addFront(20);
	std::vector<int> vect3 = list3.toVector();
	int size3 = vect3.size();
	
	if(list3.size() != size3) {
		std::cout << "	- Test 3: size of list and vector are equal when they have multiple elements: FAILED \n";
		pass = false;
	}
	
	return pass;
}

bool tester :: searchTest() {
	bool pass = true;

	LinkedListOfInts list1;
	std::vector<int> vect = list1.toVector();
	int size = vect.size();
	bool check = false;
	
	for(int i = 0; i < size; i++) {
		if(vect[i] == 55) {
			check = true;
		}
	}
	
	if(list1.search(55) && !check) {
		std::cout << "	- Test 1: Element that doesn't exist in the list is not found when searched for: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list2;
	list2.addFront(0);
	list2.addFront(1);
	std::vector<int> vect2 = list2.toVector();
	int size2 = vect2.size();
	bool check2 = false;
	bool check3 = false;
	
	for(int i = 0; i < size2; i++) {
		if(vect2[i] == 0) {
			check2 = true;
		}
	}
	
	for(int i = 0; i < size2; i++) {
		if(vect2[i] == 1) {
			check3 = true;
		}
	}
	
	if(!list2.search(1) && !list2.search(0) && check2 && check3) {
		std::cout << "	- Test 2: Elements in list that are searched for are found: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list3;
	list3.addFront(1);
	list3.addFront(1);
	list3.addFront(2);
	list3.addFront(3);
	list3.addFront(4);
	list3.addFront(5);
	list3.addFront(6);
	list3.addFront(7);
	list3.addFront(8);
	list3.addFront(9);
	std::vector<int> vect3 = list3.toVector();
	int size3 = vect.size();
	bool check4 = false;
	
	for(int i = 0; i < size3; i++) {
		if(vect3[i] == 1) {
			check4 = true;
		}
	}
	
	if(!list3.search(1) && check4) {
		std::cout << "	- Test 3: Mulitple elements of the same value in the list are found when searched for: FAILED \n";
		pass = false;
	}
	
	return pass;
}

bool tester :: addBackTest() {
	bool pass = true;
	
	LinkedListOfInts list1;
	list1.addBack(10);
	std::vector<int> vect = list1.toVector();
	//printVector(vect);
	
	int size = vect.size();
	if(size != 1) {
		std::cout << "	- Test 1: addBack iterated size to one: FAILED \n";
		pass = false;
	}
	
	if(vect[0] != 10) {
		std::cout << "	- Test 2: addBack placed value in correct spot in the list: FAILED \n";
	}
	
	list1.addFront(20);
	list1.addFront(30);
	list1.addFront(40);
	list1.addFront(50);
	list1.addFront(60);
	
	std::vector<int> vect2 = list1.toVector();
	int size2 = vect2.size();
	if(size2 != 6) {
		std::cout << "	- Test 3: addBack iterated size to six: FAILED \n";
		pass = false;
	}
	
	if(vect2[0] != 10 && vect2[1] != 20 && vect2[2] != 30 && vect2[3] != 40 && vect2[4] != 50 && vect2[5] != 60) {
		std::cout << "	- Test 4: addBack placed values in the correct spots in the list: FAILED \n";
		pass = false;
	}
	
	return pass;
}

bool tester :: addFrontTest() {
	bool pass = true;
	
	LinkedListOfInts list1;
	list1.addFront(10);
	std::vector<int> vect = list1.toVector();
	//printVector(vect);
	
	int size = vect.size();
	if(size != 1) {
		std::cout << "	- Test 1: addFront iterated size to one: FAILED \n";
		pass = false;
	}
	
	if(vect[0] != 10) {
		std::cout << "	- Test 2: addFront placed value in correct spot in the list: FAILED \n";
	}
	
	list1.addFront(20);
	list1.addFront(30);
	list1.addFront(40);
	list1.addFront(50);
	list1.addFront(60);
	
	std::vector<int> vect2 = list1.toVector();
	int size2 = vect2.size();
	if(size2 != 6) {
		std::cout << "	- Test 3: addFront iterated size to six: FAILED \n";
		pass = false;
	}
	
	if(vect2[5] != 10 && vect2[4] != 20 && vect2[3] != 30 && vect2[2] != 40 && vect2[1] != 50 && vect2[0] != 60) {
		std::cout << "	- Test 4: addFront placed values in the correct spots in the list: FAILED \n";
		pass = false;
	}
	
	return pass;
}

bool tester :: removeBackTest() {
	bool pass = true;
	
	LinkedListOfInts list1;
	list1.addFront(10);
	list1.removeBack();
	std::vector<int> vect = list1.toVector();
	//printVector(vect);
	
	int size = vect.size();
	if(size != 0) {
		std::cout << "	- Test 1: removeBack decremented size to zero: FAILED \n";
		pass = false;
	}
	
	if(vect[0] == 10) {
		std::cout << "	- Test 2: removeBack removed value in correct spot in the list: FAILED \n";
	}
	
	list1.addFront(20);
	list1.addFront(30);
	list1.addFront(40);
	list1.addFront(50);
	list1.addFront(60);
	list1.removeBack();
	list1.removeBack();
	
	std::vector<int> vect2 = list1.toVector();
	int size2 = vect2.size();
	if(size2 != 3) {
		std::cout << "	- Test 3: removeBack decremented size to three: FAILED \n";
		pass = false;
	}
	
	if(vect2[2] != 40 && vect2[1] != 50 && vect2[0] != 60) {
		std::cout << "	- Test 4: removeBack removed values in the correct spots in the list: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list2;
	list2.addFront(10);
	if(list2.removeBack()) {
		std::cout << "	- Test 5: removeBack returns true when value is removed: FAILED \n";
		pass = false;
	}
	
	return pass;
}

bool tester :: removeFrontTest() {
	bool pass = true;
	
	LinkedListOfInts list1;
	list1.addFront(10);
	list1.removeFront();
	std::vector<int> vect = list1.toVector();
	//printVector(vect);
	
	int size = vect.size();
	if(size != 0) {
		std::cout << "	- Test 1: removeFront decremented size to zero: FAILED \n";
		pass = false;
	}
	
	if(vect[0] == 10) {
		std::cout << "	- Test 2: removeFront removed value in correct spot in the list: FAILED \n";
	}
	
	list1.addFront(20);
	list1.addFront(30);
	list1.addFront(40);
	list1.addFront(50);
	list1.addFront(60);
	list1.removeFront();
	list1.removeFront();
	
	std::vector<int> vect2 = list1.toVector();
	int size2 = vect2.size();
	if(size2 != 3) {
		std::cout << "	- Test 3: removeFront decremented size to three: FAILED \n";
		pass = false;
	}
	
	if(vect2[2] != 20 && vect2[1] != 30 && vect2[0] != 40) {
		std::cout << "	- Test 4: removeFront removed values in the correct spots in the list: FAILED \n";
		pass = false;
	}
	
	LinkedListOfInts list2;
	list2.addFront(10);
	if(list2.removeFront()) {
		std::cout << "	- Test 5: removeFront returns true when value is removed: FAILED \n";
		pass = false;
	}
	
	return pass;
}

void tester :: printVector(std::vector<int> myVect) {
	int size = myVect.size();
	std::cout << "START OF LIST\n";
	for(int i = 0; i < size; i++) {
		std::cout << "Position " << i << " has value, " << myVect[i] << "\n";
	}
	std::cout << "END OF LIST\n";
}