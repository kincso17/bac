#include <iostream>

using namespace std;

int main()
{
    int a[7][5],i,j;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=4; j++){
            cin >> a[i][j];
        }
    }

    for(int balindex=1; balindex<6; balindex++){
        for(int jobbindex=balindex; jobbindex<7; jobbindex++){
            if(a[balindex][3] %2==0 && a[jobbindex][3]%2==0 &&
               a[balindex][3]>a[jobbindex][3]){
                swap(a[balindex][3],a[jobbindex][3]);
            }
        }
    }

    cout << endl;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=4; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
