#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

//constexpr size_t array_size = 10;
vector<int> ia(10);

for (int  i=0 ; i!=10;++i)
{ia[i]=i;
cout << i;}

for (int i : ia) cout << i << " ";
    cout << endl;


}
