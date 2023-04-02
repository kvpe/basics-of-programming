#include<iostream>

using namespace std;
int podzial(int tab[], int lewa, int prawa)
{
	int x=tab[(lewa+prawa)/2];
	int i=lewa, j=prawa, pomoc;
	while (1)
	{
		while (tab[j]>x)
			j--;
		while (tab[i]<x)
			i++;
		if (i<j)
		{
			pomoc=tab[i];
			tab[i]=tab[j];
			tab[j]=pomoc;
			i++;
			j--;
		}
		else
			return j;
	}
}
void quicksort(int tab[], int lewa, int prawa)
{
	int q;
	if (lewa<prawa)
	{  
		q=podzial(tab,lewa,prawa);
		quicksort(tab, lewa, q);
		quicksort(tab, q+1, prawa);
	}
}
int main()
{
	int wielkosc, i;
	cout<<"Podaj wielkosc tablicy do posortowania: ";
	cin>>wielkosc;
	int *tab = new int [wielkosc];
	for (i=0;i<wielkosc;i++)
	{
		cout<<"Podaj liczbe: ";
		cin>>tab[i];
	}
	quicksort(tab,0,wielkosc-1);
	for (i=0;i<wielkosc;i++)
		cout<<"tab["<<i<<"]="<<tab[i]<<endl;
	delete [] tab;
	return 0;
}