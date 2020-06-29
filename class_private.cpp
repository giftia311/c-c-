#include <iostream>

using namespace std;

class Blacky{
    public :
        void Blacky_public_printf()
            {
                cout<<"Blacky_public_printf!!";
            }

};


int main()
{
    Blacky bl;
    bl.Blacky_public_printf();

    return 0;
}