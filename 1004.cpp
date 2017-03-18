#include<iostream>
#include<map>
#include<string>
#include<iterator>
using namespace std;
int main(){
    int n;
    while(cin>>n&&n!=0){
        map<string,int> colorMap;
        string color;
        for(int i=0;i<n;i++){
            cin>>color;
            colorMap[color]++;
        }
        int iMax=0;
        map<string,int>::iterator iter,loc;
        for(iter=colorMap.begin();iter!=colorMap.end();iter++){
            int num=iter->second;
            if(num>iMax){
                iMax=num;
                loc=iter;
            }
        }
        cout<<loc->first<<endl;

    }
}
