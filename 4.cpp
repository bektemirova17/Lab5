#include <iostream>
using namespace std;
int main (){
int n, a, s=1;
	cin >> a >> n;
	for (int i=1; i<=n; i=i++)
	{
	s=1+s*a;
	}
	cout << s;
return 0; 
}