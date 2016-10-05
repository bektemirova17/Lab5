#include <iostream>
using namespace std;
int main(){
int x,s=0;
	cin>>x;
	for(int i=1; i<=x; i=i+1)
	{
	if(x%i==0)
	{
	s=s+1;
	}
	}
	cout<<s;
return 0;
}
