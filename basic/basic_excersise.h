/*
 * basic_excersise.h
 *
 *  Created on: Nov 7, 2016
 *      Author: masayaogushi
 */

#ifndef BASIC_EXCERSISE_H_
#define BASIC_EXCERSISE_H_

enum class Traffic_light {green, yellow, red};

double sqrt_test(double);

class basic_excersise {
public:
	basic_excersise();
	virtual ~basic_excersise();
};

class Vector{
public:
	Vector(int s);
	double& operator[](int i);
	int size();
private:
	double* elem;
	int sz;
};

#endif /* BASIC_EXCERSISE_H_ */
