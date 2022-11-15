    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;


   
    
    auto division(double int1, double int2){
        if (int2==0)
        {throw "division by zero condition";}
        double d=int1/int2;
        return d;
    }

     int main()
    { 

    int int1,int2;
    double result;

    cin >> int1 >> int2;
    try {cout << division(int1,int2) ;}
    catch (const char* msg){cerr << msg;}
        
       

    }
