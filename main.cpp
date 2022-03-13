#include<bits/stdc++.h>//complexity O(n*n)
using namespace std;
int main()
{
int n,min,j,i;
  cin>>n;
int arr[n];

for( i=1;i<=n;i++)
{
    cin>>arr[i];
}
  for( i=1;i<=n;i++)
    {
    min=i;
    for(j=i+1;j<=n;j++)
    {
     if(arr[j]<arr[min ])
     {
         min=j;
     }
    }
     if(min!=i)
     {
    swap(arr[min],arr[i]);
    
     }


}
for( i=1;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
 
    
  return 0;
  }