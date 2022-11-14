#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

vector<string> scores={"F","D","E","C","B","A","A++"};

string lettergrade;

int grade=79;


lettergrade=scores[(grade-50)/10];
lettergrade+= (grade==100||grade<60) ? "" : grade%10>7 ? "+": grade%10<3 ? "-":"";

cout << lettergrade;}

