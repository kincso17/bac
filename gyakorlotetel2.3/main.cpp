#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.in");
   /* int szam, nr=0, v[100], n, m;
    while(in>>szam){
        v[nr]=szam;
        nr++;
    }
    for(int i=0; i<nr; i++){
        if(v[i]>=0){
            n=nr-i;
            break;
        }
    }
    for(int i=nr; i>=0; i--){
        if(v[i]>=0){
            m=nr-i;
            break;
        }
    }
    if(m>n){
        cout << m;
    }else {
        cout << n;
    }
    */
    int szam, nr=0, s1=-1, s2=0;
    while(in>>szam){
        nr++;
        if(szam>=0 && s1==-1){
            s1=nr;
        }
        if(szam>0)s2=nr;
    }
    int a=nr-s1+1;
    if(s2>a){
        cout << s2;
    }else{
        cout << a;
    }
    return 0;
}
