#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
string line;
while (getline(cin,line))
    if (!line.empty())
        cout << line << endl;

string word;
while (cin >> word)
    cout << line << endl;

return 0;
}   
