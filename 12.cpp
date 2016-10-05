#include <iostream>
using namespace std;
int main (){
int x, s=0;
	cin >> x;
	for (int i=x; i>0; i=i/10)
	{
	s=s+i%10;
	}
	cout << s;
return 0;
}
