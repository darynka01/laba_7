#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <fstream>
#pragma warning(disable : 4996)

using namespace std;
class Stack {

public:
	stack <string> STACK;
	//void AddtoStack();
	string GetTop();
	void ReverseStack();
	int ReadfromFile(string f_name, stack <string> STACK);
	void WritetoFile();
	void Renumber();
	void printStack(stack <string> STACK);
};
class Stack_1:public Stack
{

};