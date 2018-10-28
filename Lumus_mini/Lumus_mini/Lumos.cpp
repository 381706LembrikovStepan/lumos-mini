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
	int i, j;
	int razmer;
	int a;
	int *A;
	FILE *f = 0;
	FILE *vozr = 0;
	FILE *ubiv = 0;
	f = fopen("..\\Lumus_mini\\vxodnie_dannie.txt", "r");
	vozr = fopen("..\\Lumus_mini\\Vozr.txt", "w");
	ubiv = fopen("..\\Lumus_mini\\Ubiv.txt", "w");
	fscanf(f, "%d \n", &razmer);
	A = new int[razmer];
	for (i = 0; i<razmer; i++)
		fscanf(f, "%d \t", &A[i]);
	cout << A[0] << "\n";
	for ( i = 0; i < razmer - 1; i++)
		for ( j = i + 1; j < razmer; j++)
			if (A[i]>A[j])
			{
				a = A[i];
				A[i] = A[j];
				A[j] = a;
			}
	fprintf(vozr, "%d \n", razmer);
	for (i = 0; i < razmer; i++)
	{
		fprintf(vozr, "%d \t", A[i]);
	}
	for (i = 0; i < razmer - 1; i++)
		for (j = i + 1; j < razmer; j++)
			if (A[i]<A[j])
			{
				a = A[i];
				A[i] = A[j];
				A[j] = a;
			}
	fprintf(ubiv, "%d \n", razmer);
	for ( i = 0; i < razmer; i++)
	{
		fprintf(ubiv, "%d \t", A[i]);
	}
		cout << A[0] << "\n";
	//fprintf(f, "%d /n", i);
}