#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

int x[10];int *p=x;

cout <<sizeof(x) << " " << sizeof(*x) << "\n";
cout <<sizeof(p) << " " << sizeof(*p) << "\n";

cout <<sizeof(x)/sizeof(*x) << "\n";
cout <<sizeof(p)/sizeof(*p)<< "\n";

}


