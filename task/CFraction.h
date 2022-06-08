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
	void setWhole(int whl) { whole = whl; }
	void setNumerator(int nmrtr) { numerator = nmrtr; }
	void setDenominator(int dnmntr) { denominator = dnmntr; }

	// ����������� �� ���������
	CFraction()
	{
		whole = 0;
		numerator = 1;
		denominator = 2;
	};
	// ����������� ��� ����� �����
	CFraction(int nmrtr, int dnmntr)
	{
		whole = 0;
		numerator = nmrtr;
		denominator = dnmntr;
	};
	// ����������� � ����� ������
	CFraction(int whl, int nmrtr, int dnmntr)
	{
		whole = whl;
		numerator = nmrtr;
		denominator = dnmntr;
	};
};

// ������� ��������� ���������� ����� �������� ����� ����� (���������� ���)
int GCD(int a, int b);

// ������� ��������� ���������� ����� ������� (���������� ���)
int LCM(int a, int b);

// ������� ���������� ������
CFraction FractReduction(CFraction f);

// ������� ����������� ������������ ����� � ��������� �����.
CFraction ConvIncorFractToMixNum(CFraction f);

// ������� ����������� ���������� ����� � ������������ �����.
CFraction ConvMixedNumToIncorrFract(CFraction f);

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