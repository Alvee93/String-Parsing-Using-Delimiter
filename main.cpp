#include <iostream>
#include<stdio.h>
#include <string>
# include<cmath>
using namespace std;
double Glat=0.000000000, Glong =0;
string DateTime;

int main()
{
    //getAPIData ("Hello,9.81,3.14,");
    //cout << Glat << Glong;
    int i=1;
    string s="hello,23.790449722222224,3.14,";
    string delimiter = ",";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {

        token = s.substr(0, pos);
        //cout << token << endl;
        //cout << i << endl;
        s.erase(0, pos + delimiter.length());
        if (i==1){
            DateTime = token;
        }

        else if (i==2){
            Glat = atof(token.c_str());
        }

        else if (i==3){
            Glong = atof(token.c_str());
        }

        i++;
    }
    //cout << DateTime << endl;
    //int b = Glat*pow(10,8) ;
    //Glat = b/pow(10,8);
    cout << Glat*100000 << endl;
    //cout << Glong << endl;
}

