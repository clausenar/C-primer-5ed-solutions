#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{ 
   
string read, tmp;

while (cin >> read)
    if (read==tmp) break; else tmp=read;

if (cin.eof()) cout << "there are no similar words";
else
cout << read << "is repeated";

}
