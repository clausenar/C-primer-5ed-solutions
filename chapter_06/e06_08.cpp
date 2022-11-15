using namespace std;

int fact(int val){
        int result=1;

        while (val>1)
            result*=val--;
            --val;
        return result;
    }
    
 int fact_2(){
        int result=1;
        int val;
        cin >> val;

        while (val>1)
            result*=val--;
            --val;
        return result;
    }

int absolute(int value)
    {if (value<0) {value=value*-1; return value;}
    else {return value;}}
