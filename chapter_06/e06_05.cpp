    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;
    
    int absolute(int value)
    {if (value<0) {value=value*-1; return value;}
    else {return value;}}
    
    int main()
    { 
    int j = -5;
    cout << absolute(j);
    return 0;
    }
