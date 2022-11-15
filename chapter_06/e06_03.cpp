    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;
    
    int fact(int val){
        int result=1;

        while (val>1)
            result*=val--;
            --val;
        return result;
    }
    

    int main()
    { 
    int j =fact(3);
    cout <<j;
    return 0;
    }
