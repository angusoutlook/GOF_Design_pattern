#include "stdafx.h"
#include "Interpret.h"
#include <iostream>
using namespace std;


Interpret::Interpret()
{
}


Interpret::~Interpret()
{
}

abstractExpression::abstractExpression()
{

}

abstractExpression::~abstractExpression()
{

}

void abstractExpression::Interpret(const Context& c)
{

}

TerminalExpression::TerminalExpression(const string& statement)
{
	this->_statement = statement;
}

TerminalExpression::~TerminalExpression()
{

}

void TerminalExpression::Interpret(const Context& c)
{
	cout << this->_statement << "TerminalExpression" << endl;
}

NonterminalExpression::NonterminalExpression(abstractExpression* expression, int times)
{
	this->_expression = expression;
	this->_times = times;
}

void NonterminalExpression::Interpret(const Context& c)
{
	for (int i = 0; i < _times; i++)
	{
		this->_expression->Interpret(c);
	}
}

NonterminalExpression::~NonterminalExpression()
{

}