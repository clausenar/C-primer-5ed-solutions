#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{ 
string str1,str2;

cout << "which string is largest, type two strings";
do {
    if (str1>str2) cout << "str1>str2  \n";
    if (str1<str2) cout << "str1<str2 \n";
    if (str1==str2) cout << "str1=str2 \n";

}
while (cin >> str1 >> str2);
}
