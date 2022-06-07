#pragma once
class CFraction
{
private:
	int whole; // целое
	int numerator; // числитель
	int denominator; // знаменатель
public:
	int getWhole() { return whole; }
	int getNumerator() { return numerator; }
	int getDenominator() { return denominator; }
	int setWhole(int whl) { whole = whl; }
	int setNumerator(int nmrtr) { numerator = nmrtr; }
	int setDenominator(int dnmntr) { denominator = dnmntr; }

	// Функция вычисляет наибольший общий делитель целых чисел (сокращенно НОД)
	int GCD(int a, int b) { return b == 0 ? a : GCD(b, a % b); }
	// Функция вычисляет наименьшее общее кратное (сокращенно НОК)
	int LCM(int a, int b) { return (a * b) / GCD(a, b); }

	// конструктор по умолчанию
	CFraction() {};
	// конструктор без целой части
	CFraction(int nmrtr, int dnmntr)
	{
		numerator = setNumerator(nmrtr);
		denominator = setDenominator(dnmntr);
	};
	// конструктор с целой частью
	CFraction(int whl, int nmrtr, int dnmntr)
	{
		whole = setWhole(whl);
		numerator = setNumerator(nmrtr);
		denominator = setDenominator(dnmntr);
	};
};

// Функция сокращения дробей
CFraction FractReduction(CFraction f);

// Функция превращения неправильной дроби в смешанное число.
CFraction ConvIncorCFractToMixNum(CFraction f);

// Функция превращения смешанного числа в неправильную дробь.
CFraction ConvMixedNumToIncorrCFract(CFraction f);

// Функция реализующая операцию сложения
CFraction AdditionOfFractions(CFraction f1, CFraction f2);

// Функция для ввода дроби
void Input(CFraction& f);

// Функция для вывода дроби
void Print(CFraction f);

// Функция выполняет вычитание дробей
CFraction FractionSubtraction(CFraction f1, CFraction f2);

// Функция реализующая операцию умножения
CFraction Multiplication(CFraction f1, CFraction f2);

// Функция реализующая операцию деления
CFraction Division(CFraction f1, CFraction f2);