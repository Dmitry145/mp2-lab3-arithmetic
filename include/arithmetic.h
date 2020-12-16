// ���������� ������� � ������� ��� ���������� �������������� ���������

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "stack.h"


struct Lexem
{
	int priority; // ��������� �������
	std::string type; // ��� �������
	std::vector <char> lex; // �������� �������
};

class PolishNotation
{
private:
	std::string formula;//���������, �������� �������������
	std::vector <Lexem> l;//������ ��� �������� �������
public:
	PolishNotation(std::string s);
	std::vector <Lexem> TranslationToPolishNotation(std::string s);
	bool CorrectionChecker(std::string s);
	double PolishNotationCalculate(vector <Lexem> v);
}; 