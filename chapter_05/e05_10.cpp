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
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        ++aCnt;
        
        break;
        
}
cout << aCnt << "\n"; 

}

}
