#include<bits/stdc++.h>
using namespace std;

class cricketer{
    public:

   int  jarsey_no;
   char  country[30];
};

int main()
{   
   cricketer * dhoni= new cricketer;

   dhoni->jarsey_no=7;
   char nm[30]="india";
   strcpy(dhoni->country,nm);


   cricketer * kohli = new cricketer;
   kohli->jarsey_no=dhoni->jarsey_no;
   strcpy(kohli->country,dhoni->country);


   delete dhoni;
   cout<<kohli->country<<endl;
   cout<<kohli->jarsey_no<<endl;
   

    return 0;
}