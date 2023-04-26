#include <iostream>

using namespace std;

void elforgatas(string szoveg){
    char v[szoveg.size()];
    char a=szoveg[0];
    for(int i=0; i<szoveg.size()-1; i++){
        v[i]=szoveg[i+1];
    }
    v[szoveg.size() - 1]=a;
    for(int i=0; i<szoveg.size(); i++){
        cout << v[i];
    }
    cout << " ";
}

int main()
{
    string szoveg;
    getline(cin, szoveg);
    string x = "";
    for(int i=0; i<szoveg.size(); i++){
        if(szoveg[i] ==' '){

            if(x.size()>2){
                elforgatas(x);
            }else{
                cout << x << " ";
            }
            x = ""; /// !!!!!!!!!!!!!!!!!!!
        }
        else
            x += szoveg[i];
    }
    if(x.size()>2){
        elforgatas(x);
    }else{
        cout << x << " ";
    }
    return 0;
}
