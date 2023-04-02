#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char napis[100]={};
	int licznik=0;
	cout<<"podaj napis: "<<endl;
	cin.getline(napis, 100);
	for(int i=0;i<100;i++)
	{
		if((napis[i]>='A' && napis[i]<='Z')||(napis[i]>='0' && napis[i]<='9')||(napis[i]==' '))
			licznik++;
	}
	if(licznik==strlen(napis))
		cout<<"napis sklada sie z samych wielkich liter"<<endl;
	else
		cout<<"napis nie sklada sie z samych wielkich liter"<<endl;
	return 0;
}
