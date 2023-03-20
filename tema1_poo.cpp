#include <iostream>
#include <string>
#include <utility>
#include<vector>

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

        ~Data(){}

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

         ~Medicament(){}

        friend istream& operator >> (istream&, Medicament&);

        friend ostream& operator << (ostream&, Medicament&);



};

istream& operator >> (istream& in, Medicament& m){
        in>>m.denumire>>m.pret;
        return in;
}

ostream& operator << (ostream& out, Medicament& m){
        cout<<"Denumire: ";
        out << m.denumire;
        cout<<"Pret: ";
        out << m.pret;
        cout<<"data: ";
        out << m.fabricat.getLuna();
        out << m.fabricat.getZi();
        out << m.fabricat.getAn();

        return out;
}

class Farmacie{
    string denumir[SIZE];
    int nrMedicamente;
    vector<Medicament> med;
   /* Medicament Med[]; */
};


int main(){

 Data d1(1,"aprilie",2018);
 cout<<d1.getAn();
 Medicament m1("Parasinus",9.5,d1), m2("Aspirina",d1), m3;
 //cin>>m3;
 //cout<<m1;


}

