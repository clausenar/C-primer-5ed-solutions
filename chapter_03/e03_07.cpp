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

for (char c : line)
    new_line+="X";

cout << new_line << endl;
return 0;
}   
