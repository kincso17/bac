#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.in");
    int v[100]={0}, szamlalo=0, szam;
    while(in>>szam){
        if(szam<100){
            v[szam]=1;
        }
    }
    for(int i=98; i>=10; i--){
        if(v[i]==0 && i%10!=i/10){
            szamlalo++;
            cout <<i << " ";
        }
        if(szamlalo >=2){
            break;
        }
    }
    if(szamlalo==0){
        cout << "nu exista";
    }
    return 0;
}
