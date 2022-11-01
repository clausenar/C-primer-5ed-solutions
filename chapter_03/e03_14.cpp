#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{

int num;
vector<int> text;

while (cin>>num)
{
    text.push_back(num);
}
return 0;
}   
