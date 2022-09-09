#include <iostream>
using namespace std;
void main()
{
	/*int lista1[100] = { 2,4,6,8,9 };
	int nrElemente1 = 5;
	int lista2[100] = {4,5,8,9,10,12 };
	int nrElemente2 = 6;*/



	/*int lista3[100];
	int nrElemente3 = nrElemente1 + nrElemente2;
	int i1 = 0;
	int i2 = 0;
	for (int j = 0;j < nrElemente3;j++)
	{
		if (i1 < nrElemente1 && i2 < nrElemente2)
		{
			if (lista1[i1] <= lista2[i2])
			{
				lista3[j] = lista1[i1];
				i1++;
			}
			else
			{
				lista3[j] = lista2[i2];
				i2++;
			}
		}
		else
		{
			if (i1 == nrElemente1)
			{
				lista3[j] = lista2[i2];
				i2++;
			}
			else
			{
				if (i2 == nrElemente2)
				{
					lista3[j] = lista1[i1];
					i1++;
				}
			}
		}
	}
	for (int i = 0;i < nrElemente3;i++)
	{
		cout << "lista3[" << i << "]= " << lista3[i] << endl;
	}*/

	int lista1[100] = { 3,5,8,10,12 };
	int nrElemente1 = 5;
	int lista2[100] = { 5,11,14,20,33,42 };
	int nrElemente2 = 6;


	int lista3[100];
	int nrElemente3 = nrElemente1 + nrElemente2;
	int i1 = 0;
	int i2 = 0;
	for (int j = nrElemente3-1;j >= 0;j--)
	{
		if (i1 < nrElemente1 && i2 < nrElemente2)
		{
			if (lista1[i1] <= lista2[i2])
			{
				lista3[j] = lista1[i1];
				i1++;
			}
			else
			{
				lista3[j] = lista2[i2];
				i2++;
			}
		}
		else
		{
			if (i1 == nrElemente1)
			{
				lista3[j] = lista2[i2];
				i2++;
			}
			else
			{
				if (i2 == nrElemente2)
				{
					lista3[j] = lista1[i1];
					i1++;
				}
			}
		}
	}

	for (int i = 0;i < nrElemente3;i++)
	{
		cout << "lista3[" << i << "]= " << lista3[i] << endl;
	}
















}