#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

int ia[5];

//for (auto i : ia)
//cout << i;

for (auto &i : ia)
i = 0;

for (auto i : ia)
cout << i;

}
