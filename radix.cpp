#include<iostream>
using namespace std;
//Getmaximumvaluefrom
int getMax(int arr[],int n)
{
int max=arr[0];
for(int i=1;i<n;i++)
if(arr[i]>max)
max=arr[i];
return max;
}
//Countsortofarr[].
void countSort(int arr[],int n,int exp)
{
//Count[i]arraywillbecountingthenumberofarrayvalueshavingthat'i'digitattheir
int output[n],i,count[10]={0};
//Countthenumberoftimeseachdigitoccurredat(exp)thplaceinevery
for(i=0;i<n;i++)
count[(arr[i]/exp)%10]++;
//Calculatingtheircumulative
for(i=1;i<10;i++)
count[i]+=count[i-1];
//Insertingvaluesaccordingtothedigit'(arr[i]/exp)%10'fetchedintocount[(arr[i]/
for(i=n-1;i>=0;i--)
{
output[count[(arr[i]/exp)%10]-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
//Assigningtheresulttothearrpointerof
for(i=0;i<n;i++)
arr[i]=output[i];
}
//Sortarr[]ofsizenusingRadix
void radixsort(int arr[],int n)
{
int exp,m;
m=getMax(arr,n);
//CallingcountSort()fordigitat(exp)thplaceinevery
for(exp=1;m/exp>0;exp*=10)
countSort(arr,n,exp);
}
int main()
{
int n,i;
cout<<"\nEnter the number of data element to be sorted:";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{

cout<<"Enterelement"<<i+1<<":";
cin>>arr[i];
}
radixsort(arr,n);
//Printingthesorted
cout<<"\nSorted Data";
for(i=0;i<n;i++)
cout<<"->"<<arr[i];
return 0;
}
