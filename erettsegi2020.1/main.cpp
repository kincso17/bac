#include <iostream>

using namespace std;

int suma(int a, int b){
    int oszto, max=0 , s=0;
    if(a>=b){
        max=a;
    }else{
        max=b;
    }
    for(oszto=1; oszto<=max/2; oszto++){
        if(a%oszto==0 && b%oszto==0){
            s=s+oszto;
        }
    }
   return s;
}

int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << suma(a,b);
    return 0;
}
