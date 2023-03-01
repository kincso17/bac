#include <iostream>

using namespace std;

int putere(int n){
    int oszto=2, db=0, minh=9999, mino;
    while(n>1){
        while(n%oszto==0){
            n=n/oszto;
            db++;
        }
        if(db<minh && db>0){
            minh=db;
            db=0;
            mino=oszto;
        }
        oszto++;
    }
    return mino;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout<< putere(n);
    return 0;
}
