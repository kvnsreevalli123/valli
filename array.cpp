#include<iostream>
using namespace std;
int main()
{
	int *p,i;
	int arr[]={1,2,3,5,4};
	p=arr;
	for(i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
return 0;
}
