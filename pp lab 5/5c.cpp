#include <iostream>
using namespace std;

int main()
{
	char napis[100]={};
	cout<<"podaj napis: "<<endl;
	cin.getline(napis,100);
	for(int i=0;i<100;i++)
	{
		if((napis[i]>='A' && napis[i]<='Y')||(napis[i]>='a' && napis[i]<='y'))
			(int)napis[i]++;
		else if(napis[i]=='z')
			napis[i]='A';
		else if(napis[i]=='Z')
			napis[i]='a';
	}
	cout<<napis;
	return 0;
}