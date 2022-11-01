#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{

vector<string> v1;
string word,t;


while (cin >> word){
    if (word=="stop")
    break;
    v1.push_back(word);
}
    

cout << v1.size() << endl;

for (auto &i : v1)
    for (auto &c : i){
        c=toupper(c);
        cout << i << endl;
        t=t+" "+i;}
cout << t << endl;


return 0;
}   
