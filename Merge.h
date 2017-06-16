/*
 * merge.h
 *
 *  Created on: Jun 15, 2017
 *      Author: mackenzie
 */

#ifndef MERGE_H_
#define MERGE_H_

template <typename T>
class Merge {
public:
	Merge();
	void mergeSort(int startI, int endI);
	void printArr();
private:
	T mergeArr[20];
	void merge(int index1, int index2, int index3);
};

#endif /* MERGE_H_ */
