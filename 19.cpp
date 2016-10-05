#include <iostream>
using namespace std;
int main (){
int n, a, s=0;
	cin >> n;
	for (int i=1; i<=n; i=i+1)
	{
	cin >> a;
	if (a==0){
	s=s+1;
	}
	}
	cout << s;
return 0;
}