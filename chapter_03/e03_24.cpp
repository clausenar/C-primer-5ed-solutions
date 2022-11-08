#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{

vector<int> v1{2,4,6,8};
string word,t;

for (auto it = v1.begin();it+1!=v1.end();++it)
cout << *it+*(it+1) << "\n";


for (auto left = v1.begin(), right = v1.end()-1; left<=right; ++left, --right)

cout << *left << " " << *right << " " << *left + *right << "\n";

}
