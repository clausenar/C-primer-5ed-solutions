#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

char ch;
unsigned aCnt=0, sCnt=0, oCnt=0, eCnt=0, iCnt=0, uCnt=0;
while (cin >> std::noskipws >> ch){

switch (ch){
    case 'a':
    case 'A':
        ++aCnt;
        break;
    case 'e':
    case 'E':
        ++eCnt;
        break;
    case 'i':
    case 'I':
        ++iCnt;
        break;
    case 'o':
    case 'O':
        ++oCnt;
        break;
    case 'u':
    case 'U':
        ++uCnt;
        break;
    case ' ':
    case '\t':
    case '\n':
        cout << "addintg";
        ++sCnt;
        break; 
}

cout << "Number of vovel a: \t " << aCnt  << "\n" ; 
cout << "Number of vovel e: \t " << eCnt  << "\n" ; 
cout << "Number of vovel i: \t " << iCnt  << "\n" ; 
cout << "Number of vovel o: \t " << oCnt  << "\n" ; 
cout << "Number of vovel u: \t " << uCnt  << "\n" ; 
cout << "Number of vovel special \t " << sCnt  << "\n" ; 
}
}
