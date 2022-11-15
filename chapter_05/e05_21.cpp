#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{ 
   
string read, tmp;
bool not_twice=true;


while (cin >> read)
{
    if (isupper(read[0]) && tmp==read)
    {
        cout << read << "is upper";
        not_twice=false;
        break;
    }
    
    tmp=read;
}
if (not_twice) cout << "There are no similar words";
return 0;
}
