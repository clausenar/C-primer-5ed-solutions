#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
int tmp=b;
b=a;
a=tmp;

}

int main(){
int i=31,n=0;
cout << i << " " << n << "\n";
swap(i,n);
cout << i << " " << n << "\n";

}
