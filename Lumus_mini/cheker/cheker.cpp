#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "russian");
	FILE *vozr = 0;
	FILE *ubiv = 0;
	FILE *l = 0;
	int i;
	int *A;
	int razmer;
	int a = 0;
	vozr = fopen("..\\Lumus_mini\\Vozr.txt", "r");
	ubiv = fopen("..\\Lumus_mini\\Ubiv.txt", "r");
	l = fopen("..\\Cheker\\pravilnost_programmi.txt", "w");
	fscanf(vozr, "%d \n", &razmer);
	A = new int[razmer];
	for (i = 0; i < razmer; i++)
		fscanf(vozr, "%d \t", &A[i]);
	for (i = 0; i < razmer - 1; i++)
		if (A[i] > A[i + 1])
			a = 1;
	if (a == 1)
		fprintf(l, "программа сортирует массив по возрастанию не верно\n");
	else
		fprintf(l, "программа сортирует массив по возрастанию верно\n");
	a = 0;
	fscanf(ubiv, "%d \n", &razmer);
	for (i = 0; i < razmer; i++)
		fscanf(ubiv, "%d \t", &A[i]);
	for (i = 0; i < razmer - 1; i++)
		if (A[i] < A[i + 1])
			a = 1;
	if (a == 1)
		fprintf(l, "программа сортирует массив по убыванию не верно\n");
	else
		fprintf(l, "программа сортирует массив по убыванию верно\n");
}