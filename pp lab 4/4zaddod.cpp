#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

const int size=10;
double tab[size]={0};
int i=0;

void losujtab()
{
	srand(time(NULL));
	for(i;i<size;i++)
	{
		tab[i]=rand()%100;
		cout<<tab[i]<<endl;
	}
}

double sr_aryt(double tab[])
{
	double suma=0, sr_aryt=0;
	for(i=0;i<size;i++)
		suma+=tab[i];
	sr_aryt=suma/size;
	cout<<"srednia aryt: "<<sr_aryt<<endl;
	return sr_aryt;
}

double sr_geo(double tab[])
{
	double iloczyn=1, sr_geo=0;
	for(i=0;i<size;i++)
		iloczyn*=tab[i];
	sr_geo=pow(iloczyn, 1.0/size);
	cout<<"srednia geo: "<<sr_geo<<endl;
	return sr_geo;
}

double sr_harm(double tab[])
{
	double suma=0, sr_harm=0;
	for(i=0;i<size;i++)
		suma+=1/tab[i];
	sr_harm=size/suma;
	cout<<"srednia harm: "<<sr_harm<<endl;
	return sr_harm;
}

double mediana(double tab[])
{
	double mediana=0;
	if(size%2==1)
		mediana=tab[size/2];
	else
		mediana=(tab[(size/2)-1]+tab[size/2])/2;
	cout<<"mediana: "<<mediana<<endl;
}

int main()
{
	losujtab();
	sr_aryt(tab);
	sr_geo(tab);
	sr_harm(tab);
	mediana(tab);
	return 0;
}