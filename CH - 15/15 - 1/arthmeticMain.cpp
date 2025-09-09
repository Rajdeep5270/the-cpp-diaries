#include "Arthmetic.cpp"

int main()
{
    Calculator calc;

    calc.calculate(10, 5);
    calc.calculate(10, 5, 6);
    calc.calculate(10, 5, 6, 6);
    calc.calculate(10, 5, 10, 9, 11);
    calc.calculate(10, 0);
}
