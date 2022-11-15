#include<iostream>
using namespace std;

void reset(int &t)
{ t=0;}

int main(){
int i=41;
cout << i << "\n";
reset(i);
cout << i << "\n";

}
