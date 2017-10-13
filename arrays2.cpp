#include<iostream>
using namespace std;
int la(int a[], int s){
    int max=a[0];
    for(int j=1;j<s;j++){
          if(max<a[j]){max=a[j];}
          }
    return max;
    }
int sma(int a[], int s){
    int min=a[0];
    for(int j=1;j<s;j++)
            if(min>a[j])
                        min=a[j];
    return min;}
float mea(int a[], int s){
    int sum =0;
    for(int j=0;j<s;j++){
            sum+=a[j];
            }
    return (float(sum)/s);
    }
float medi(int a[], int s){
    int t=0;
    for(int c=0;c<s;c++){
            for(int j=0;j<((s-1)-c);j++){
                                         if(a[j]>a[j+1]){
                                                         t=a[j+1];
                                                         a[j+1]=a[j];
                                                         a[j]=t;
                                                         }                        
            }
    }
    if((s%2)==0){
                 float x=(a[(s/2)]+a[(s/2)-1])/2;
                 return x;
                 }
    else if ((s%2)!=0){
         return a[(s/2)];
         }
}
void fre(int a[],int s){
    int c=1,t=1,sq[s],i=0;
    cout<<"No.s having highest frequency \n";
    for(int k=0;k<s;k++){
            if(a[k]==a[k+1]){t++;}
            else{
                 if(c<=t){c=t;}
                 sq[i]=t;
                 i++;
                 t=1;
                 }
    }
    int sum = 0;
    for(int x=0;x<s;x++){
            if(sq[x]==c){
                         cout<<a[sum]<<endl;
                         sum+=c;
                         }
            else{sum+=sq[x];}
            }

}
int main(){
    int s,l,sm,f,v;
    cout<<"Enter size ";
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
                         cout<<"array["<<i<<"]\n";
                         cin>>a[i];
                         }
    l=la(a,s);
    sm=sma(a,s);
    float me = mea(a,s);
    float med=medi(a,s);
    fre(a,s);
    cout<<"largest no."<<l<<endl<<"smallest no."<<sm<<endl<<"mean "<<me<<endl<<"median "<<med<<endl;
    cin>>v;
    return 0;
    }
