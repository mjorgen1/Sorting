/*
 * merge.cpp
 *
 *  Created on: Jun 15, 2017
 *      Author: mackenzie
 */
#include "Merge.h"

#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
Merge<T>::Merge() {
	for(int i = 0; i < 20; i++)
	{
		mergeArr[i] = rand()%20;
	}
	cout << "The newly made array is: ";
	printArr();
}

template <typename T>
void Merge<T>::mergeSort(int startI, int endI)
{
	if(startI < endI)
	{
		int mI = (endI+startI)/2;

		mergeSort(startI, mI); //need to reference the mergeArr array
		mergeSort(mI+1, endI);

		merge(startI, mI, endI);
	}
}

template <typename T>
void Merge<T>::merge(int start, int middle, int end){
	int x, y, z;
	int num1 = middle - start + 1;
	int num2 = end - middle;

	//creating arrays for the split array
	T *left = new T [num1];
	T *right = new T [num2];

	//puts data into those array for the right side of the array and the left
	for(int i = 0; i < num1; i++)
	{
		left[i] = mergeArr[start+i];
	}
	for(x = 0; x < num2; x++)
	{
		right[x]= mergeArr[middle + 1 + x];
	}

	//merge the arrays above back into the mergeArr
	int a = 0;
	int b = 0;
	int c = start;
	while( a < num1 && b < num2)
	{
		if(left[a] <= right[b])
		{
			mergeArr[c] = left[a];
			a++;
			c++;
		}
		else
		{
			mergeArr[c] = right[b];
			b++;
			c++;
		}
	}
	while(a < num1)
	{
		mergeArr[c] = left[a];
		a++;
		c++;
	}
	while(b < num2)
	{
		mergeArr[c] = right[b];
		b++;
		c++;
	}

	delete []left;
	delete []right;

}

template <typename T>
void Merge<T>::printArr(){
	for(int x = 0; x< 20; x++)
	{
		cout << mergeArr[x] << " ";
	}
	cout << endl;
}

template class Merge<int>;
template class Merge<float>;

