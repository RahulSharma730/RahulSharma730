/*Prograam to print and reverse an array*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int n,a[10],i,j,temp;
  cout<<"enter the number of elements in the array : ";
  cin>>n;

  cout<<"Enter the array elemets : ";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"the array elements are : ";
  for (i=0;i<n;i++)
  {
    cout<<" "<<a[i];
  }

  cout<<"\nReversed array : ";
  for(i=0,j=n-1;i<(n+1)/2;i++,j--)
  {
    temp=0;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
 for (i=0;i<n;i++)
  {
    cout<<" "<<a[i];
  }



 return 0;
}