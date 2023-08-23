#include<bits/stdc++.h>
using namespace std;
class cricketer{
  public:
    int jersey_no;
    string country;
    float height ;

    // cricketer (string country,int jersey_no)
    // {
    //    this->country = country;
    //    this->jersey_no = jersey_no;  
    // }
};
int main()
{   
    cricketer *dhoni = new cricketer;
    dhoni->country = "india";
    dhoni->jersey_no = 7;
    dhoni->height = 5.9;
    // dhoni kaka retaitment e geche 
    cricketer *kholi = new cricketer ;

    *kholi = *dhoni;
    delete dhoni;
    cout<<kholi->country;
    cout<<kholi->jersey_no;
    cout<<kholi->height;
    

   

    return 0;
}