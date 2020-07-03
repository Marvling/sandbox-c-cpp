#include <iostream>
#include <cmath>
#include <string>

using std::cin;
using std::cout;
using std::string;

//short, int, long, long long,

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = base * result;
    }
    return result;
}

void print_number(int number)
{
    cout << number << "\n";
}

int main()
{

    int u = 39;
    char k = '\'';
    int rakam;
    int bos = 15;

    string iplik = "helel";

    // cout << "ne kadar?";
    // cin >> rakam;
    // cout << "al sana " << rakam << " tane" << std::endl;

    // cout << pow(2, 16) << std::endl;
    // cout << power(16, 2) << std::endl;
    // cout << "int u " << (char)u << std::endl;
    // cout << "char16 k " << (char16_t)k << std::endl;

    // printf("%i\n", bos);
    // print_number(power(2, 16));

    cout << __FLT_DIG__ << std::endl;
    cout << __DBL_DIG__ << std::endl;

    cout << iplik << std::endl;

    return 0;
}