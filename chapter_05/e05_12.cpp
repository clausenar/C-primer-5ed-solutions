#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

char ch, pre_ch;
unsigned aCnt=0, sCnt=0, oCnt=0, eCnt=0, iCnt=0, uCnt=0, ffCnt=0;
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
        if (pre_ch=='f') ++ffCnt;
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
    case 'f':
        if (pre_ch =='f') ++ffCnt;
        break;
    case 'l':
        if (pre_ch =='f') ++ffCnt;
        break;
    
}

pre_ch=ch;

cout << "Number of vovel a: \t " << aCnt  << "\n" ; 
cout << "Number of vovel e: \t " << eCnt  << "\n" ; 
cout << "Number of vovel i: \t " << iCnt  << "\n" ; 
cout << "Number of vovel o: \t " << oCnt  << "\n" ; 
cout << "Number of vovel u: \t " << uCnt  << "\n" ; 
cout << "Number of vovel special \t " << sCnt  << "\n" ; 
cout << "Number of vovel ff \t " << ffCnt  << "\n" ; 
}
}
