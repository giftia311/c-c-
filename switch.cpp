#include <iostream>

using namespace std;

int main()
{
    
    int age;
    cout << "Please enter the number " <<endl;
    
    cin >> age;
    
    switch(age){
        case 1:
            cout << "This one " << endl;
            break;
        case 2:
            cout << "This two " << endl;
            break;
        case 3:
            cout << "This three " << endl;
            break;
        default:
            cout << "No include!" <<endl;
    }


    return 0;
}