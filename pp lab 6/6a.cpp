#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int busy, miejsca, spr=0;
	cout<<"Liczba busow: ";
	cin>>busy;
	cout<<"Liczba miejsc w busach: ";
	cin>>miejsca;
	//alokacja pamieci
	int **tab;
	tab=(int**)calloc(busy, sizeof(int *));
	if(tab==NULL)
	{
		cout<<"BLAD PRZYDZIALU PAMIECI";
		return -1;
	}
	for(int i=0; i<busy; i++)
	{
		tab[i]=(int*)calloc(miejsca, sizeof(int));
		if(tab[i]==NULL)
		{
			cout<<"BLAD PRZYDZIALU PAMIECI";
			return -2;
	    }	
	}	
	//pokaz miejsca
	cout<<"miejsca:"<<endl;
	for (int i=0;i<busy;i++)
	{
		for (int j=0;j<miejsca;j++)
			cout<<tab[i][j]<<" ";
		cout<<" - bus "<<i+1<<endl<<endl;
	}
	//rezerwacja miejsc
	int nrbusa, liczbamiejsc, wybor;
	do
	{
		cout<<"podaj nr busa w ktorym chcesz zarezerwowac miejsca: ";
		cin>>nrbusa;
		cout<<"podaj liczbe miejsc do rezerwacji: ";
		cin>>liczbamiejsc;
		if(liczbamiejsc<=miejsca)
		{
			for(int i=0;i<liczbamiejsc;i++)
			{
				if(tab[nrbusa-1][i]==0)
				{
					tab[nrbusa-1][i]=1;
					spr++;
				}		
				else
				{
					cout<<"BLAD - wybrano tego samego busa (wybierz inny)"<<endl;
					break;
				}
			}	
		}
		else
			cout<<"BRAK MIEJSC - sprobuj ponownie"<<endl;
		if(spr==liczbamiejsc)
		{
			cout<<"rezerwacja przebiegla pomyslnie"<<endl;
			spr=0;	
		}	
		cout<<"Czy chcesz zarezerwowac miejsca w innym busie? 0=nie 1=tak"<<endl;
		cin>>wybor;
	}while(wybor);
	//pokaz miejsca
	cout<<"miejsca:"<<endl;
	for (int i=0;i<busy;i++)
	{
		for (int j=0;j<miejsca;j++)
			cout<<tab[i][j]<<" ";
		cout<<" - bus "<<i+1<<endl<<endl;
	}
	//zwolnienie pamieci
	for(int i=0; i<busy; i++)
		free(tab[i]);
	free(tab);
	return 0;
}