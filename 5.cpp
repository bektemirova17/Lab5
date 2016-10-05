#include <iostream>
using namespace std;
int main(){
int n;
double s=1.0;
cin>>n;
for (int i=2; i<=n; i++){
s=s+1/(i*i*1.0);
}
cout<<s;
return 0;
}

