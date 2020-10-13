#include <iostream>
#include"Calculation.h"


int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    const int StrLength = 200;
    char str[StrLength];
    cin >> str;
    double result = Calculation(str);
    cout << "Ответ: " << result<<endl;
   
    system("pause");

    return 0;
}
