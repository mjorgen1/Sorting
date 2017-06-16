/*
 * count.h
 *
 *  Created on: Jun 15, 2017
 *      Author: mackenzie
 */

#ifndef COUNT_H_
#define COUNT_H_

template <typename T>
class Count {
public:
	Count();
	void countSort();
private:
	T countArr[20];
	T max;
	void printArr();
};

#endif /* COUNT_H_ */
