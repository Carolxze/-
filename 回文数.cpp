#include <iostream>
using namespace std;
#include<string.h>
int main()
{
	int t=1;
	char a[20],b[20],i;
    cout<<"������һ��������";
	cin.getline(a,20);
	 
	for(i=0;i<=(strlen(a)-1)/2;i++)
	{
	b[i] = a[ strlen(a)-i-1 ];
	if (a[i]==b[i])
	 t=1;
	 else
	 t=0;}
	 if(t==1)
	 cout<<"�ǻ�����";
	 else
	 cout<<"���ǻ�����";
	 return 0; 
	   

}
