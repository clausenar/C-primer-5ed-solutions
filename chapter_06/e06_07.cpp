    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;
    
    size_t count_calls(){
        static size_t ctr=-1;
        return ++ctr;
    }

    int main()
    {
        for (size_t i=0;i!=10;++i)
        cout << count_calls() ;
        return 0;

    }
