#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

int generation(room* num)//��������� ������� 
{
	for (int i = 0;i < 10;i++)
	{
		num->numb = rand() % 11;
	}
	cout << "����� ��������:" << num << endl;
}

void generationKol(room* rooms)//���-�� ������ 
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
