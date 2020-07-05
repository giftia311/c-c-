#include <iostream>

using namespace std;

int recursion(int x){

    if(x == 1){
        return 1;
    }else{
        return x * recursion(x-1);
    }
    
}


int main()
{

    cout<<recursion(3)<<endl;

    return 0;
}
