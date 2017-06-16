/*
 * bubble.h
 *
 *  Created on: Jun 15, 2017
 *      Author: mackenzie
 */

#ifndef BUBBLE_H_
#define BUBBLE_H_

template <typename T>
class Bubble {
public:
	Bubble();
	void bubbleSort();
private:
	T bubbleArr[20];
	void printArr();
	void swap(T *x, T *y);
};

#endif /* BUBBLE_H_ */
