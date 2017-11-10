/**
*	@file tester.h
*	@author James Glass
*	@date November 3rd 2017
*	@brief A header file for tester class
*/

#ifndef TESTER_H
#define TESTER_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"
#include "List.h"

class tester
{
	public:

		void run();
	
		bool isEmptyTest();
	
		bool sizeTest();
	
		bool searchTest();
	
		bool addBackTest();
	
		bool addFrontTest();
	
		bool removeBackTest();
	
		bool removeFrontTest();
		
		void printVector(std::vector<int> myVect);

	private:
};

#endif
