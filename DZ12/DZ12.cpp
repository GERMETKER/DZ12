#include <iostream>
#include <Windows.h>
const int size = 4;
void FirstFunk();
void SecFunk();
void ThirFunk();
void ForthFunk();
void (*FunkARR[size])();

void main()
{
	FunkARR[0] = FirstFunk;
	FunkARR[1] = SecFunk;
	FunkARR[2] = ThirFunk;
	FunkARR[3] = ForthFunk;
	for (int i = 0; i < size; i++)
	{
		(*FunkARR[i])();
	}
	return 0;
}
void FirstFunk()
{
	std::cout << "One\n";
}
void SecFunk()
{
	std::cout << "Two\n";
}
void ThirFunk()
{
	std::cout << "Three\n";
}
void ForthFunk()
{
	std::cout << "Four\n";
}
