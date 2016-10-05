#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b;
    	cin>>a>>b;
    	for(int i=a; i<=b; i=i+1)
    	{
        double k=sqrt(1.0*i);
        if((int)k*k==i){
        cout<<i<<' ';
        }
    	}
return 0;
}
