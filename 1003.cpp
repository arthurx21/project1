#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int m=0;
        cin>>m;
        vector<int> a;
        int from=0,to=0;
        int temp=0;
        int maxSum=-1001,thisSum=0;//考虑到全为负数的情况，maxSum应置为一个大负数
        for(int j=0;j<m;j++){
            int t;
            cin>>t;
            a.push_back(t);
        }
        for(int j=0;j<m;j++){
          thisSum+=a[j];
          if(thisSum>maxSum){
                maxSum=thisSum;
                from=temp;
                to=j;
          }
          if(thisSum<0){
                thisSum=0;
                temp=j+1;
          }
        }
        cout<<"Case "<<i<<":"<<endl<<maxSum;
        cout<<" "<<from+1<<" "<<to+1<<endl;
        if(i!=n) cout<<endl;
    }
}
