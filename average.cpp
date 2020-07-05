#include <iostream>

using namespace std;

int main()
{
    int age;
    int person = 0;
    int agetotal = 0;
  

    cout << "Please Enter the age ." << endl; 
    cin >> age;

    while(age != -1){
        agetotal = agetotal + age;
        person = person + 1;

         cout << "Please Enter the next age ." << endl; 
         cin >> age;

    }
    cout << "Person number :" << person << endl;
    cout << "Person number average :" << agetotal/person ;


    return 0;
}