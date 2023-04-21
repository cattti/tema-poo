#include <iostream>
#include "clase.h"
using namespace std;
int main() {

    Contract c(2,2014,"mihael","biv",300);
   // cout<<"contract c info: ";
   // c.Printinfo();
    ///Contract c8;
    ///cin>>c8;
    ///c8.Printinfo();
//    cout<<"\n";
//    Contract d = c;
//    cout<<"contract d info: ";
//    d.Printinfo();
//    cout<<"\n";
//    Contract c4(2);

//    cout<<"contract inchiriere ci info: ";
//    ci.Printinfo();
//    std::cout<<"\n";
//    c4.Printnrcontract();
    ContractInchiriere ci(3,2012,"mazda","automob",6000,8);
    ContractInchiriere cii(4,2022,"Daria","Cati",3000,9);
    ContractInchiriere ciii(5,2022,"Andrei","Srl",700,10);
    ContractInchiriere ciiii(6,2010,"Bono","Eugenia",4000,6);
    ContractInchiriere ciiiii(7,2013,"Costiana","Dalin",1800,8);
    Dosar dosr;
    dosr.inser_vec(ci);
    dosr.inser_vec(cii);
    dosr.inser_vec(ciii);
    dosr.inser_vec(ciiii);
    dosr.inser_vec(ciiiii);
    dosr.Printinfo();

    long sum = 0;

    for (int i = 0; i < dosr.getnrcontracte(); i++)
    {
        cout<<endl;
        cout<<"Pentru contractul cu numarul "<<dosr.getnrcontr(i)<<" valoarea totala pentru "
        <<dosr.getperioadacontr(i)<<" luni, a cate "<<dosr.getvaloarecontr(i)<<" euro, va fi: "<<
        dosr.getvaloarecontr(i) * dosr.getperioadacontr(i)<<" euro";
        sum = sum + dosr.getvaloarecontr(i) * dosr.getperioadacontr(i);
    }

    cout<<endl;

    cout<<endl<<"Valoarea incasata pentru toate contractele este de "<<sum<<" euro";



    return 0;
}
