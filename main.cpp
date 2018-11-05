/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"
int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
	std::cout << "Running...\n";
	Test mytester;
	mytester.run();

	std::cout<<"And we're done.\nGoodbye.\n";

	return (0);

}
