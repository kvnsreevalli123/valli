#include<iostream>
using namespace std;
int prime(int);
int main()
{ 
int n;
int i,j,c,b;
cin>>n;
for(i=0;i<=(n);i++)
{
	for(j=0;j<=(n/2);j++)
	{
			cout<<prime(i)<<"+"<<prime(j)<<"="<<n<<endl;
			}
		if((i+j)==n)
			{
		if(prime(i)==i&&prime(j)==j)
		}
		}
return 0;
}
int prime(int i)
{
	int s,m=0,flag=0;
	m=(i/2);
	for(s=2;s<=m;s++)
	{
		if(i%s==0)
		{
			flag=1;
		break;
		}
	}
	if(flag==0)
	{
		return i;
	}
}


