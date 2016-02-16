/*
 * ArrayController.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: dvil4688
 */

#include "ArrayController.h";

ArrayController::ArrayController()
{

}

ArrayController::~ArrayController()
{

}

void ArrayController :: start()
{
	int * intArray = new int [5];
	double * doubleArray = new double [5];

	intArray[0] = 2;
	intArray[1] = 4;
	intArray[2] = 6;
	intArray[3] = 8;
	intArray[4] = 10;

	doubleArray[0] = 2.2;
	doubleArray[1] = 4.4;
	doubleArray[2] = 6.6;
	doubleArray[3] = 8.8;
	doubleArray[4] = 10.1;


	for (int index = 0; index < 5; index++)
	{
		cout << "The integer at " << index << " is " << intArray[index] << endl;
		cout << "The double at " << index << " is " << doubleArray[index] << endl;
	}
}


