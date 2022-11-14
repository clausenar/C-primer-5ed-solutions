#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main()
{

vector<string> scores={"F","D","E","C","B","A","A++"};

string lettergrade;

int grade=79;


{if (grade<60)
    lettergrade=scores[0];
else
    {lettergrade=scores[(grade-50)/10];
    if (grade!=100)
    lettergrade+=grade%10>7 ? "+": grade%10<3 ? "-":"";
    }
cout << lettergrade;}
}

