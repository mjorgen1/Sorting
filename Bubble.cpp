/*
 * bubble.cpp
 *
 *  Created on: Jun 15, 2017
 *      Author: mackenzie
 */
#include "Bubble.h"

#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
Bubble<T>::Bubble() {
	 for(int i = 0; i < 20; i++)
	 {
		 bubbleArr[i] = (T)(rand()%200) / (T)10;

	 }
	 cout << "The newly made array is: ";
	 printArr();
}

template <class T>
void Bubble<T>::bubbleSort()
{
	for(int index = 0; index < 19; index++)
	{
		for(int go = 0; go < 19-index; go++)
		{
			if(bubbleArr[go] > bubbleArr[go+1]) //if swap needed swaps the position of the curr and next elements
			{
				swap(&bubbleArr[go],&bubbleArr[go+1]);
			}
		}
	}
	cout << "The bubble sorted array is: ";
	printArr();
}

template <class T>
void Bubble<T>::swap(T *x, T *y)
{
	T temp = *x;
	*x = *y;
	*y = temp;
}

template <class T>
void Bubble<T>::printArr(){
	for(int x = 0; x< 20; x++)
	{
		cout << bubbleArr[x] << " ";
	}
	cout << endl;
}

template class Bubble<int>;
template class Bubble<float>;

