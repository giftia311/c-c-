#include <iostream>

using namespace std;

class Blackyclass{
    public :
        Blackyclass(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
        
};


int main()
{
    Blackyclass bl("main -> class name ");
    cout << bl.getName();

    return 0;
}