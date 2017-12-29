// Combine_two_lists.cpp : Combines two lists alternatingly.
//

#include "stdafx.h"
#include<iostream>
#include <vector>
#include<string>

std::string Combine(std::string a, std::string b)
{
	int tempsize;
	std::string Pile;
	std::string N;
	std::string M;
	
	if (b.size()<= a.size())
	{
		tempsize = b.size();
	}
	else
	{
		tempsize = a.size();
	}

	for (int i = 0; i <= tempsize-1; i++)
	{
		Pile= Pile + a[i]+ b[i];

	}
	return Pile;
}

int main()
{
	std::string Numbers ="123456789";
	std::string Words = "abcdef";
	std::string Result;

	Result = Combine(Numbers, Words);

	std::cout << Result<< "\n";


    return 0;
}

