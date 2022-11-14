#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

char ch;
unsigned aCnt=0;
while (cin >> ch){

switch (ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        ++aCnt;
        
        break;
        
}
cout << aCnt << "\n"; 

}

}

