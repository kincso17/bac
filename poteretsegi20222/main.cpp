#include <iostream>
#include <string>
using namespace std;

int main()
{
    string  jelszo;
    cout<< "jelszo=";
    cin >> jelszo;

    size_t found=jelszo.find("b");
    while(found!=string::npos){
        jelszo.replace(found,1,"a");
        found=jelszo.find("b", found+1);
    }
     size_t found1=jelszo.find("c");
    while(found1!=string::npos){
        jelszo.replace(found1,1,"a");
        found1=jelszo.find("c", found1+1);
    }
     size_t found2=jelszo.find("d");
    while(found2!=string::npos){
        jelszo.replace(found2,1,"a");
        found2=jelszo.find("d", found2+1);
    }
     size_t found3=jelszo.find("f");
    while(found3!=string::npos){
        jelszo.replace(found3,1,"e");
        found3=jelszo.find("f", found3+1);
    }
     size_t found4=jelszo.find("g");
    while(found4!=string::npos){
        jelszo.replace(found4,1,"e");
        found4=jelszo.find("g", found4+1);
    }
     size_t found5=jelszo.find("h");
    while(found5!=string::npos){
        jelszo.replace(found5,1,"e");
        found5=jelszo.find("h", found5+1);
    }
     size_t found6=jelszo.find("j");
    while(found6!=string::npos){
        jelszo.replace(found6,1,"i");
        found6=jelszo.find("j", found6+1);
    }
     size_t found7=jelszo.find("k");
    while(found7!=string::npos){
        jelszo.replace(found7,1,"i");
        found7=jelszo.find("k", found7+1);
    }
     size_t found8=jelszo.find("l");
    while(found8!=string::npos){
        jelszo.replace(found8,1,"i");
        found8=jelszo.find("l", found8+1);
    }
     size_t found9=jelszo.find("m");
    while(found9!=string::npos){
        jelszo.replace(found9,1,"i");
        found9=jelszo.find("m", found9+1);
    }
     size_t found10=jelszo.find("n");
    while(found10!=string::npos){
        jelszo.replace(found10,1,"i");
        found10=jelszo.find("n", found10+1);
    }
     size_t found11=jelszo.find("p");
    while(found11!=string::npos){
        jelszo.replace(found11,1,"o");
        found11=jelszo.find("p", found11+1);
    }
     size_t found12=jelszo.find("q");
    while(found12!=string::npos){
        jelszo.replace(found12,1,"o");
        found12=jelszo.find("q", found12+1);
    }
     size_t found13=jelszo.find("r");
    while(found13!=string::npos){
        jelszo.replace(found13,1,"o");
        found13=jelszo.find("r", found13+1);
    }
     size_t found14=jelszo.find("s");
    while(found14!=string::npos){
        jelszo.replace(found14,1,"o");
        found14=jelszo.find("s", found14+1);
    }
     size_t found15=jelszo.find("t");
    while(found15!=string::npos){
        jelszo.replace(found15,1,"o");
        found15=jelszo.find("t", found15+1);
    }
     size_t found16=jelszo.find("v");
    while(found16!=string::npos){
        jelszo.replace(found16,1,"u");
        found16=jelszo.find("v", found16+1);
    }
    size_t found17=jelszo.find("w");
    while(found17!=string::npos){
        jelszo.replace(found17,1,"u");
        found17=jelszo.find("w", found17+1);
    }
     size_t found18=jelszo.find("x");
    while(found18!=string::npos){
        jelszo.replace(found18,1,"u");
        found18=jelszo.find("x", found18+1);
    }
    size_t found19=jelszo.find("y");
    while(found19!=string::npos){
        jelszo.replace(found19,1,"u");
        found19=jelszo.find("y", found19+1);
    }
     size_t found20=jelszo.find("z");
    while(found20!=string::npos){

        jelszo.replace(found20,1,"u");
        found20=jelszo.find("z", found20+1);
    }
    cout << jelszo << endl;
    return 0;
}
