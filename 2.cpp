#include <iostream>
using namespace std;
int main (){
int n, k, s1=1, s2=1, s3=1;
	cin >> n >> k;
	for(int i=1; i<=n; ++i)
	s1=s1*i;
	
	for(int j=1; j<=k; ++j)
	s2=s2*j;
	
	for(int m=1; m<=(n-k); ++m)
	s3=s3*m;
	
	int C=s1/(s2*s3);
	cout << C;
return 0;
}