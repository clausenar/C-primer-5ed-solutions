#include<iostream>
using namespace std;

int main(){
int *a,*b,tmp;

int n =0, i =42;
cout << n << " " << i << "\n";

a=&n;
b=&i;

tmp=*b;
*b=*a;
*a=tmp;

cout << n << " " << i << "\n";

}
