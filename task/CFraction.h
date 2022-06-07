#pragma once
class CFraction
{
private:
	int whole; // �����
	int numerator; // ���������
	int denominator; // �����������
public:
	int getWhole() { return whole; }
	int getNumerator() { return numerator; }
	int getDenominator() { return denominator; }
	int setWhole(int whl) { whole = whl; }
	int setNumerator(int nmrtr) { numerator = nmrtr; }
	int setDenominator(int dnmntr) { denominator = dnmntr; }

	// ������� ��������� ���������� ����� �������� ����� ����� (���������� ���)
	int GCD(int a, int b) { return b == 0 ? a : GCD(b, a % b); }
	// ������� ��������� ���������� ����� ������� (���������� ���)
	int LCM(int a, int b) { return (a * b) / GCD(a, b); }

	// ����������� �� ���������
	CFraction() {};
	// ����������� ��� ����� �����
	CFraction(int nmrtr, int dnmntr)
	{
		numerator = setNumerator(nmrtr);
		denominator = setDenominator(dnmntr);
	};
	// ����������� � ����� ������
	CFraction(int whl, int nmrtr, int dnmntr)
	{
		whole = setWhole(whl);
		numerator = setNumerator(nmrtr);
		denominator = setDenominator(dnmntr);
	};
};

// ������� ���������� ������
CFraction FractReduction(CFraction f);

// ������� ����������� ������������ ����� � ��������� �����.
CFraction ConvIncorCFractToMixNum(CFraction f);

// ������� ����������� ���������� ����� � ������������ �����.
CFraction ConvMixedNumToIncorrCFract(CFraction f);

// ������� ����������� �������� ��������
CFraction AdditionOfFractions(CFraction f1, CFraction f2);

// ������� ��� ����� �����
void Input(CFraction& f);

// ������� ��� ������ �����
void Print(CFraction f);

// ������� ��������� ��������� ������
CFraction FractionSubtraction(CFraction f1, CFraction f2);

// ������� ����������� �������� ���������
CFraction Multiplication(CFraction f1, CFraction f2);

// ������� ����������� �������� �������
CFraction Division(CFraction f1, CFraction f2);