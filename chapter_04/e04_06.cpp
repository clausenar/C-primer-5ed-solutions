#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

int i=2;

while (cin >> i){
if (i%2==0)
cout << "This is an even value ";
if (i%2==1)
cout << "This is an odd value ";
}
}
