#include "Calculation.h"
double Calculation(char* str) {

	int const NumsCount = 100;
	int const ActionsCount = 100;

	char Actions[ActionsCount];
	double Nums[NumsCount];

	int RealNumsCount = 0;
	int position = 0;

	DefineAllNumsAndActions(str, Nums, Actions, RealNumsCount);
	
	double result = Action(Nums[0], Nums[1], Actions[0]);
	for (int i = 1; i < RealNumsCount-1; ++i) {
		result = Action(result, Nums[i+1], Actions[i]);
	}
	return result;
	
}

