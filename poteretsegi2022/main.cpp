#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int nr=0, v[1000], max=0, db=0;

    ifstream in("bac.txt");
    int n=0;
    while(in>>v[n]){
        n++;
    }

     for (int i=0; i<n; i++){
        if(v[i]%2==0){
            nr++;
            if(max<nr){
                max=nr;
            }
        }else{

            nr=0;
            if(v[i-1]%2==0){
                db++;
            }
        }
     }
    cout << db << " " << max << endl;
    return 0;
}
