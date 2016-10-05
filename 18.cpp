#include <iostream>
using namespace std;
int main(){
int a, s=0, x=1;
	cin >> a;
	while(a>=1){
	s=s+a%10*x;
	a=a/10;
	x=x*2;
  	}
  	cout << s;
return 0;
}

