#include <iostream>

using namespace std;

class BuckysClass{
    public:
        void coolSaying(){
            cout<<"This is coolSaying!!"<<endl;

        }

};



int main()
{
    BuckysClass buckysObject;
    buckysObject.coolSaying();

    return 0;
}