#include<bits/stdc++.h>
using namespace std;
class cricketer{

    public:
    char country[100];
    int jarsey_no;
};
int main()
{   
    cricketer *dhoni = new cricketer;
    dhoni->jarsey_no = 7;
    char nm[100] = "india";
    strcpy(dhoni->country,nm);

    cricketer *kohil = new cricketer;
    kohil->jarsey_no = dhoni->jarsey_no;
    strcpy(kohil->country,dhoni->country);

    delete dhoni;
    cout<<kohil->country<<endl;
    cout<<kohil->jarsey_no;




    return 0;
}