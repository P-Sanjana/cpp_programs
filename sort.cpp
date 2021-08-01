#include<iostream>
using namespace std;
class sort
{
  int a[10],n;
  public:
   void getdata();
   void radixsort();	
};
void sort::getdata()
{
	cout<<"enter no.of elements";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void sort::radixsort()
{
	int i,j,k,temp,min,d=1,small;
	for(k=0;k<3;k++)
	{
		for(i=0;i<n;i++)
		{
			min=(a[i]/d)%10;
			small=i;
			for(j=i+1;j<n;j++)
			{
				if(((a[i]/d)%10)<min)
				{
					small=j;
				}
				temp=a[small];
				a[small]=a[i];
				a[i]=temp;
			}
			d=d*10;
		}
	}
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	
}
int main()
{
	sort s;
	s.getdata();
	s.radixsort();
}
