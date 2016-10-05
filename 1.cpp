#include <iostream>
using namespace std;
int main (){
int n, s=0, i; 
	cin >> n; 
	for (i=1; i<=n; i=i+1) 
	{
	s = s+i*i;
	}
	cout << s;
return 0;
}