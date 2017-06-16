/*
 * count.cpp
 *
 *  Created on: Jun 15, 2017
 *      Author: mackenzie
 */
#include "Count.h"

#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
Count<T>::Count() {
	max = 0;
	for(int i = 0; i < 20; i++)
	{
		countArr[i] = rand()%10;
		if(i > 0 && max < countArr[i])
			max = countArr[i];
	}
	cout << "The newly made array is: ";
	printArr();
}

template <typename T>
void Count<T>::countSort()
{
	//step 1 create array max+1 set elements=0
	T arr1[max+1];
	for(int x = 0; x < max+1; x++)
	{
		arr1[x] = 0;
	}
	//step 2 count # of times recorded of each value and record in arr1
	for(int val = 0; val < max+1; val++)
	{
		for(int index = 0; index < 20; index++)
		{
			if(countArr[index] == val)
			{
				arr1[val] += 1;
			}
		}
	}

	for(int z = 1; z < max+1; z++)
	{
		arr1[z] = arr1[z-1]+arr1[z];
	}
	//create a final array that gets the sorted list finally
	T sortFinal[20];
	for(int e = 0; e < 20; e++)
	{
		T value = countArr[e];
		arr1[value]--;
		int index = arr1[value];
		sortFinal[index] = value;
	}
	for(int in = 0; in < 20; in++)
	{
		countArr[in] = sortFinal[in];
	}
	cout << "The count sorted array is: ";

	printArr();
}

template <typename T>
void Count<T>::printArr()
{
	for(int x = 0; x< 20; x++)
	{
		cout << countArr[x] << " ";
	}
	cout << endl;
}

template class Count<int>;
