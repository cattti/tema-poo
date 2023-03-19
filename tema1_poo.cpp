#include <iostream>
#include <string>
#include <utility>
using namespace std;

const int SIZE = 50;

class Data{
    int zi;
    string luna;
    int an;

    public:
        Data(int z, string l, int a)
: zi(z), luna(l), an(a)
{
}
        Data(){}

        string getLuna(){
    return luna;
}

        int getAn(){
    return an;
}
        int getZi(){
    return zi;
}


};


class Medicament
{
    string denumire;
    float pret;
    Data fabricat;

    public:

        Medicament(string d, float p, Data f)
        : denumire(d), pret(p), fabricat(f)
{
}
        Medicament(string d, Data f)
        : denumire(d), fabricat(f)
{
}
        Medicament(){}

        void printinfo(){
    cout<<denumire<<" ";
    fabricat.getAn();
}

        friend istream& operator >> (istream&, Medicament&);

        friend ostream& operator << (ostream&, Medicament&);

};



class Farmacie{
    string denumir[SIZE];
    int nrMedicamente;
   /* Medicament Med[]; */
};


int main(){

 Data d1(1,"aprilie",2018);
 cout<<d1.getAn();
 Medicament m1("Parasinus",9.5,d1);
 Medicament m2("Aspirina",d1);
 Medicament m3;
 cin>>m3;


}

