#include <iostream>

using namespace std;

void primek(int n, int &x, int &y){

    x=0;
    y=0;
    for (int i=n-1; i>0; i--){
        bool prim=true;
        for(int oszto=2; oszto<i/2+1 ; oszto++){
            if(i%oszto == 0){
                prim=false;
            }
        }
        if(prim){
            if(y==0){
                y=i;
            }else{
                if(x==0){
                    x=i;
                } else {
                    break;
                }
            }

        }
     }
}

int main()
{
    int n, x, y;
    cout << "n = ";
    cin >> n;
    primek(n, x, y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
