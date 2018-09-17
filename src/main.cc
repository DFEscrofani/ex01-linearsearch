/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: Linear Search
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @DaltonEscrofani
*/
#include <iostream>
#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;

int main(int argc, char *argv[]) {
	int array[] = { 3, 1, 2 };
	find(0, array, 3);

	double doubles[] = { 3.0, 1.0, 2.0 };
	find(0.0, doubles, 3);
}