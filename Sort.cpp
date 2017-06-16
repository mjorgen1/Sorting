#include <iostream>
#include <cstdlib>

#include "Bubble.h"
#include "Count.h"
#include "Merge.h"

using namespace std;

int main()
{
	 Bubble<float> b;
	 b.bubbleSort();

	 Merge<float> m;
	 m.mergeSort(0, 19);
	 cout << "The merge sorted array is: ";
	 m.printArr();

	Count<int> c;
	 c.countSort();
	 return 0;
}
