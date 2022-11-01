#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{

vector<int> v1{20,21,33,33};


cout << v1.size() << endl;

for (int i: v1)
cout << i ;
return 0;
}   
