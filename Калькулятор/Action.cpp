#include "Action.h"

double Action(double& FirstNum, double& SecondNum, char operation)
{	
	if (operation == '/') {
		if (SecondNum != 0)
			return FirstNum / SecondNum;
		else {
			Error();
			return NULL;
		}
	}
	if (operation == '*')
		return FirstNum * SecondNum;
	
	if (operation == '+')
		return FirstNum + SecondNum;
	
	if (operation == '-')
		return FirstNum - SecondNum;
	
	if (operation == '^')
		return pow(FirstNum, SecondNum);

	Error();
	return NULL;
	
}
