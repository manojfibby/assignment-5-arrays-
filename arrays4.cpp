#include<iostream>
using namespace std;
void max(int A[],int L){
  int M = A[0];
  for (int i = 0; i<L;i++){
  if (A[i] > M){
  M = A[i];}
  }
  cout<< "max"<<M;
}

void min(int A[],int L){
  int m = A[0];
  for (int i = 0; i<L;i++){
  if (A[i] < m){
  m = A[i];}
  }
  cout<<"min "<< m;
}
void merge(int a[],int b[],int s,int t){
     int c[s+t];
     for(int i=0;i<(s+t);i++){
             if(i<s){c[i]=a[i];}
             else{c[i]=b[i-s];}
             }
     min(c,(s+t));
     max(c,(s+t));
     }
int main(){
    int x, s,t;
    cout<<"Enter 1st size ";
    cin>>s;
    cout<<"Enter 2nd size ";
    cin>>t;
    int a[s];
    for(int i=0;i<s;i++){
                         cout<<"array["<<i<<"]\n";
                         cin>>a[i];
                         }
    
    int b[t];
    for(int i=0;i<t;i++){
                         cout<<"array["<<i<<"]\n";
                         cin>>b[i];
                         }
merge(a,b,s,t);
cin>>x;
    return 0;
    }
