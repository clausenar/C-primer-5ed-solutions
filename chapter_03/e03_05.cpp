#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
string line;
string new_line;
while (getline(cin,line))
    {
        if (!line.length())
            break;
        new_line=new_line+" " +line;
        }  
cout <<  new_line << endl; 
return 0;
}   
