#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char napis[100]={};
	cout<<"podaj napis: "<<endl;
	cin.getline(napis,100);
	for(int i=0;i<100;i++)
	{
		if(i==0)
		{
			napis[i]=toupper(napis[i]);
			napis[i+1]=tolower(napis[i+1]);
		}	
		else if(napis[i]==' ')
			napis[i+1]=toupper(napis[i+1]);
		else
			napis[i+1]=tolower(napis[i+1]);
 	    cout<<napis[i];
	}
	return 0;
}