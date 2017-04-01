#p1021

#include <iostream>
using namespace std;
int f[20];
int main() {
	f[0]=7%3;
	f[1]=11%3;
	for(int i=2;i<20;i++) f[i]=(f[i-1]%3+f[i-2]%3)%3;
	int n;
	while(cin>>n){
		if(f[n%20]==0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
