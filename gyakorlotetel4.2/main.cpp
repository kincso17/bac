#include <iostream>

using namespace std;

int main()
{
    int m, n, v[100][100];
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<m; i++){
        bool van=false;
        int max=0;
        for(int j=0; j<n; j++){
            if(v[i][j]> max && v[i][j]<21){
                max=v[i][j];
                van=true;
            }
        }
        if(van){
            cout << max <<endl;
        }else{
            cout << "nu exista"<< endl;
        }
    }
    return 0;
}
