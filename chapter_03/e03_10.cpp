#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{

string line;
string new_line;

cin >> line;

for (auto c : line)
    if (!ispunct(c))
        new_line=new_line+c;

cout << new_line << endl;
return 0;
}   
