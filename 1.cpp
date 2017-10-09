#include<iostream>

using namespace std;

int main
{
 int sum=0,n,i;
cout<<"enter the size of an array:";
cin>>n;
cout<<"\n\nEnter any "<<n<<" elements in Array:";
for (i=0;i<n;i++)
{
cin>>ar[i];
}
cout<<"sum of the array are";

for (i=0;i<n;i++)
{
sum= sum+ar[i];
}
cout<<sum;
return 0;
}
