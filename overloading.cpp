#include <iostream>

using namespace std;

void printnumber(int x){

    cout << "int number is " << x << endl;
}

void printnumber(float x){

    cout << "float number is " << x << endl;
}



int main()
{
    int a = 10;
    float b = 10.22;

    printnumber(a);
    printnumber(b);

    return 0;
}