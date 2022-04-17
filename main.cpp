#include <iostream>
#include <string.h>

using namespace std;

char table[5][5];

string encrypt(string pt)
{
    string encpt = "";
    int l = pt.length();
    char encpt1[l+1];
    strcpy(encpt1, pt.c_str());
    for (int i = 0; i < l; i++)
        for (int j = 0; j < 5; j++)
            for (int k = 0; k < 5; k++) {
                if (encpt1[i]==table[j][k])
                {
                    char ch = j + 48 + 1;
                    string row(1,ch);
                    encpt = encpt + row;
                    ch = k + 48 + 1;
                    string col(1,ch);
                    encpt = encpt + col;
                }
            }
    return encpt;
}

