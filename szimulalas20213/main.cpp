#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, osszeg=0, c;
    bool tomb[11];
    ifstream in("bac.in");
    for(int i=1; i<=10; i++){
        tomb[i]=false;
    }
    while(in>>x){
        c=x*x;
        osszeg=osszeg+c;
        if(tomb[x]==false){
            tomb[x]=true;
            osszeg=osszeg+10;
        }
    }

    cout << osszeg;

    return 0;
}
