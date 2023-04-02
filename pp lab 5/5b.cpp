#include <iostream>
#include <string>
using namespace std;

int main()
{	
	char napis[100]={};
	int liczby=0, litery=0, znaki=0;
	cout<<"podaj napis: "<<endl;
	cin.getline(napis, 100);
	for(int i=0;i<100;i++)
	{
		if((napis[i]>='A' && napis[i]<='Z')||(napis[i]>='a' && napis[i]<='z'))
			litery++;
		else if(napis[i]>='0' && napis[i]<='9')
			liczby++;
		else if((int)napis[i]!=0) // liczy rowniez spacje
			znaki++;		
	}
	cout<<"litery: "<<litery<<endl;
	cout<<"liczby: "<<liczby<<endl;
	cout<<"znaki: "<<znaki<<endl;
	return 0;
}