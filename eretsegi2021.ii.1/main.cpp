#include <iostream>

using namespace std;

int main()
{
   int x, y, nr=1;
   cout << "x=";
   cin >> x;
    cout << "y=";
    cin >> y;
    if(x>y){
        int tmp=x;
        x=y;
        y=tmp;
    }
    for(int i=y; i>=x; i--){
        cout << "1";
        if(nr>=x){
            cout << "2";
        }
        nr=nr*3;
        cout << "1";
    }
    return 0;
}
