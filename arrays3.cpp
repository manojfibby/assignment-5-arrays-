#include<iostream>
using namespace std;

void klarge(int a[],int s, int k){
    cout<<"k'th largest no. is \n"<<a[s-k];}
void ksmall(int a[],int s, int k){
    cout<<"\n k'th smallest no. is \n"<<a[k-1];}

int main(){
    int s,t=0,k,x;
    cout<<"Enter size ";
    cin>>s;
    cout<<"Enter k ";
    cin>>k;
    if(k>s||k==0){cout<<"Error!!";
            return 0;}
    int a[s];
    cout<<"Don't enter same values multiple times\n";
    for(int i=0;i<s;i++){
                         cout<<"array["<<i<<"]\n";
                         cin>>a[i];
                         }
    for(int c=0;c<s;c++){
            for(int j=0;j<((s-1)-c);j++){
                                         if(a[j]>a[j+1]){
                                                         t=a[j+1];
                                                         a[j+1]=a[j];
                                                         a[j]=t;
                                                         }}}     
    klarge(a,s,k);
    ksmall(a,s,k);
    cin>>x;
    return 0;
    }
