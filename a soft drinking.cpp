#include <iostream>
#include <algorithm>
using namespace std;
int main(){

int n,k,l,c,d,p,nl,np, result1, result2, drink, lime, salt;

cin>>n>>k>>l>>c>>d>>p>>nl>>np;

drink = (k*l)/n;

lime = (c*d);

salt = p/np;


result1 = min(drink, lime);
result2 = min(result1, salt);


cout<<(result2/n);

return 0;
}
