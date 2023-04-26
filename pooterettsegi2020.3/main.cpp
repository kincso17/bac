#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int szam, b=0, a=99;
    while(in>> szam){
        if(szam/100==0 && szam/10!=0){
            if(szam<a){
                a=szam;
            }
            if(szam>b){
                b=szam;
            }
        }
    }
    a=a-1;
    b=b+1;
    cout << a << " " << b;
    return 0;
}
