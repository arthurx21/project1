#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int maxn = 1000;
struct bign{
    int len;
    int str[maxn];
    bign(){
        len = 1;
        memset(str,0,sizeof(str));
    }
    string toStr() const{
        string res="";
        for(int i=0;i<len;i++) res=(char)(str[i]+'0')+res;
        if(res=="") res = "0";
        return res;
    }
    bool operator <(const bign& b){
        if(len!=b.len) return len<b.len;
        for(int i=len-1;i>=0;i--){
            if(str[i]!=b.str[i]) return str[i]<b.str[i];

        }
        return false;
    }
    bign operator =(const char* nchar){
        len = strlen(nchar);
        for(int i=0;i<len;i++){
            str[i]=nchar[len-i-1]-'0';
        }
        return *this;
    }
    bign operator =(int num){
        char s[maxn];
        sprintf(s,"%d",num);
        *this=s;
        len=strlen(s);
        return *this;
    }
    bign(int num){
        *this=num;
    }
    bign(char* nchar){
        *this=nchar;
    }
    bign operator +(const bign&b){
         bign c;
         c.len=0;
         int g=0;
         for(int i=0;g||i<
         max(len,b.len);i++){
            int tmp=g;
            if(i<len) tmp+=str[i];
            if(i<b.len) tmp+=b.str[i];
            c.str[c.len++]=tmp%10;
            g=tmp/10;
         }

         return c;
    }
    bign operator +=(const bign& c){
        *this=*this+c;
        return *this;
    }

};
istream& operator >>(istream &in,bign& x){
        string s;
        in>>s;
        x=s.c_str();
        return in;
    }
ostream& operator <<(ostream &out, const bign& x){
    out<<x.toStr();
    return out;
}
int main(){
   int n;
   cin>>n;
   int i=1;
   for(int i=1;i<=n;i++){
    bign a,b;
    cin>>a>>b;
    cout<<"Case "<<i<<":"<<endl<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<a+b<<endl;
    if(i!=n) cout<<endl;
   }
}
