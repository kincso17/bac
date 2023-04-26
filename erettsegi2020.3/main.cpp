#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.in");
    int szam, nr=0;
    int v[1001]={0};
    while(in >> szam){
        v[szam]=v[szam]+1;
    }

    for(int i=1; i<=1000 ; i++){
        if(v[szam]%2==1){
            nr++;
        }

        if (nr > 1){
            break;
        }

    }

    if(nr<2){
        cout << "DA";
    }else{
        cout << "NU";
    }
    return 0;
}
