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
	FILE *f = 0;
	FILE *l = 0;
	int i;
	int *A;
	int razmer;
	int a = 0;
	f = fopen("..\\Lumus_mini\\vixodnie_dannie.txt", "r");
	l = fopen("..\\Cheker\\pravilnost_programmi.txt", "w");
	fscanf(f, "%d \n", &razmer);
	A = new int[razmer];
	for (i = 0; i < razmer; i++)
		fscanf(f, "%d \t", &A[i]);
	for (i = 0; i < razmer - 1; i++)
		if (A[i] > A[i + 1])
			a = 1;
	if (a == 1)
		fprintf(l, "программа работает не верно");
	else
		fprintf(l, "всё верно");
	cout << A[0];
}