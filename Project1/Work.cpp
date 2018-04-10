#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

int generation(room* num)//нумираци€ квартир 
{
	for (int i = 0;i < 10;i++)
	{
		num->numb = rand() % 11;
	}
	cout << "Ќомер квартира:" << num << endl;
}

void generationKol(room* rooms)//кол-во комнат 
{
	for (int i = 0;i < 10;i++)
	{
		rooms->rooms = 2 + rand() % 4;
	}
}
void generationPrce(room* price)
{
	if()

}
