#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

vector<string> scores={"F","D","E","C","B","A","A++"};

string lettergrade;

int grade;

while (cin >> grade)
{if (grade<60)
    lettergrade=scores[0];
else
    lettergrade=scores[(grade-50)/10];

cout << lettergrade;}
}


