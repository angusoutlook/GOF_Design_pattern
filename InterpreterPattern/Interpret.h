#pragma once

#ifndef _INTERPRET_H_
#define _INTERPRET_H_

#include "Context.h"
#include <string>
using namespace std;

class Interpret
{
public:
	Interpret();
	virtual ~Interpret();
};

class abstractExpression{
protected:
	abstractExpression();
public:
	virtual ~abstractExpression();
	virtual void Interpret(const Context& c);
private:

};

class TerminalExpression :
	public abstractExpression
{
public :
	TerminalExpression(const string & statement);
	~TerminalExpression();
	void Interpret(const Context& c);
protected:
private:
	string _statement;
};

class NonterminalExpression :
	public abstractExpression
{
public:

	NonterminalExpression(abstractExpression* expression, int times);
	~NonterminalExpression();
	void Interpret(const Context& c);
protected:
private:
	abstractExpression* _expression;
	int _times;
};

#endif