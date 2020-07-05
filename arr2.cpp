#include <iostream>

using namespace std;

int main()
{
    int arr[2][3] = {{0,1,2},{3,4,5}};

/*
    cout << arr[0][1] << endl;
    cout << arr[1][2] << endl;
*/
    for(int row = 0; row<2;row++){
        for(int column = 0; column <3;column++){
            cout << arr[row][column]<<" ";
        }
        cout << endl;
    }

    return 0;
}