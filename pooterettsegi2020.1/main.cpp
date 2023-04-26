#include <iostream>

using namespace std;

int knp(int a, int b, int k){
    int nr=0;
    for(int i=a; i<=b; i++){
        int szam=0;
        for(int oszto=1; oszto<=i;oszto++){
            if(i%oszto==0){
                szam=szam+oszto;
            }
        }
        if(i%2==szam%2){
            nr++;
            if(nr==k){
                return i;
            }
        }
    }
    return -1;
}

int main()
{
   int a, b, k;
   cout << "a=";
   cin >> a;
   cout << "b=";
   cin >> b;
   cout << "k=";
   cin >> k;
   cout << knp(a,b,k);
    return 0;
}
