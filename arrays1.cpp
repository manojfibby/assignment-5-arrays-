#include<iostream>
using namespace std;

int sum(int arr[], int size)
{int s=0;
for(int i=0;i<size;i++){s+= arr[i];}
return s;
}
int main(){
int s,a[200];
cout<<"Enter size of array";
cin>>s;
for (int i=0;i<s;i++){
	cin>>a[i];}
int y=sum(a,s);
cout<<y;
return 0;}
