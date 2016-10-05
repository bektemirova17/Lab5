#include <iostream>
using namespace std;
int main(){
int x,d,s=0;
    	cin>>x>>d;
    	while(x){  
	if(d==x%10)
    	{
    	s=s+1;
    	x=x/10;
    	}
	}
    	cout<<s;
return 0;
}