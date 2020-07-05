#include <iostream>
using namespace std;

void arrfunction(int arrfun[],int sizeofarr);

int main()
{

    int arr[5]={1,2,3,4,5};

    arrfunction(arr,5);
    return 0;
}

void arrfunction(int arrfun[],int sizeofarr){

    for(int i = 0;i <sizeofarr;i++){
        cout << arrfun[i] << endl;
    }

}
