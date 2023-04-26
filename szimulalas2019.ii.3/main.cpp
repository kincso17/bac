#include <iostream>

using namespace std;

int main()
{
    int i, j, a[6][6];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            a[i][j]=2*i+j;
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cout << a[i][j] << " ";
        }
         cout << endl;
    }
    return 0;
}
