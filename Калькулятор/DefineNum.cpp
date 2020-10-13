#include "DefineNum.h"

double DefineNum(char* str, int& position) {
	double Num = 0;
	bool IsNumNegative = false;
	if (str[position] == '-') {
		IsNumNegative = true;
		++position;
	}
	while (str[position] >= '0' && str[position] <= '9') {
		Num = Num * 10 + (str[position] - '0');
		++position;
	}
	if (str[position] == '.') {
		++position;
		int degree = 1;
		while (str[position] >= '0' && str[position] <= '9') {
			Num += (str[position] - '0') / pow(10,degree);
			++degree;
			++position;
		}
	}
	if (IsNumNegative) Num*=(-1);
	return Num;
}
