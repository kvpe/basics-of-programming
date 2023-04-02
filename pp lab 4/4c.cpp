#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	int n=0;
	cout<<"Podaj rozmiar tablicy: ";
	cin>>n;
	double *tab = new double [n];
	srand(time(NULL));
	cout<<"tablica przed sortowaniem: "<<endl;
	for(int i=0;i<n;i++)
	{
		tab[i]=rand();
		cout<<tab[i]<<" ";
	}	
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(tab[j]>tab[j+1])
                 swap(tab[j], tab[j+1]);
        }
    }
    cout<<endl<<"tablica po sortowaniu: "<<endl;
	for (int i=0;i<n;i++)
		cout<<tab[i]<<" ";
	delete [] tab;
	return 0;
}