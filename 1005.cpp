#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
int main(){
   int f[50];
   f[1]=1;
   f[2]=1;
   int n,A,B;
   while(cin>>A>>B>>n&&!(n==0&&A==0&&B==0)){
       for(int i=3;i<50;i++){
        f[i]=(A*f[i-1]%7+B*f[i-2]%7)%7;
       }
       //cout<<"op:"<<op<<endl<<"ed:"<<ed<<endl;
       n<50?cout<<f[n]<<endl:cout<<f[n%48]<<endl;
   }
}
