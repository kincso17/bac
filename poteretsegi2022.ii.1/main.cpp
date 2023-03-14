#include <iostream>

using namespace std;

int main()
{
    int m, n, x, y;
    cout <<"m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    x=1;
    while(x==1){
        x=m;
        y=n;
        n=n-1;
        while(x==y){
            if(x>y){
                x=x-y;
            }else{
                y=y-x;
            }
        }
    }
    cout << n+1;
return 0;
}
