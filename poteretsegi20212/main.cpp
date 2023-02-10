#include <iostream>

using namespace std;

int main()
{
    int k, n;
    int v[100][100];
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        v[i][i]=(i+1)*k;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                v[i][j]=v[i][i]+j-i;
            }
            if(i>j){
                v[i][j]=v[i][i]+j-i;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
