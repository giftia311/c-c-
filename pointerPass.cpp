#include <iostream>//passByValue cant change value passByReference can change value

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
    int betty =13;
    int sandy =13;

    passByValue(betty);
    passByReference(&sandy);
    cout << "betty is " << betty <<endl;
    cout << "sandy is " << sandy <<endl;


    return 0;
}


void passByValue(int x){
    x=99;
}

void passByReference(int *x){
    *x = 66;
}



