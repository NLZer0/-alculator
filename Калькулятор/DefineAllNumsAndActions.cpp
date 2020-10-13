#include "DefineAllNumsAndActions.h"

void DefineAllNumsAndActions(char* str, double* Nums, char* Actions, int & RealNumsCount)
{	
	int position = 0;
	int index = 0;
	while (position < RealSrtLength(str)) {
		Nums[index] = DefineNum(str, position);
		Actions[index] = str[position];
		++position;
		++RealNumsCount;
		++index;
	}
}
