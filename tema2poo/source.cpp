#include "clase.h"
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

Contract::Contract(){

}

Contract::Contract(int nrContract, int an, string beneficiar, string furnizor, int valoare)
    : nrContract(nrContract), an(an), beneficiar(beneficiar), furnizor(furnizor), valoare(valoare)
    {
}

Contract::Contract(int nrContract): nrContract(nrContract) {
}

void Contract::Printinfo() {
    cout<<nrContract<<" "<<an<<" "<<beneficiar<<" "<<furnizor<<" "<<valoare<<" ";
}

Contract::~Contract() ///noexcept
{
}

void Contract::Printnrcontract() {
    cout<<nrContract<<" ";
}

 std::istream& operator >> (std::istream& in, Contract& ob){
        std::cout<<"\n"<<"Enter contract num: ";
        in >> ob.nrContract;
        std::cout<<"Enter contract year: ";
        in >> ob.an;
        std::cout<<"Enter beneficiar: ";
        in >> ob.beneficiar;
        std::cout<<"Enter provider: ";
        in >> ob.furnizor;
        std::cout<<"Enter contract value: ";
        in >> ob.valoare;
        return in;

    }

int Contract::getvaloare() {
    return valoare;
}

int Contract::getnrcontract() {
    return nrContract;
};

ContractInchiriere::~ContractInchiriere()
///noexcept
{
};

void ContractInchiriere::Printinfo() {
    Contract::Printinfo();
    cout<<perioada<<" ";
}



ContractInchiriere::ContractInchiriere(int nrContract, int an, string beneficiar,string furnizor,
                                       int valoare, int perioada)
                                       : Contract(nrContract, an, beneficiar,furnizor,valoare), perioada(perioada){
}

ContractInchiriere::ContractInchiriere() {

}

int ContractInchiriere::getperioada() {
    return perioada;
}




//
//Dosar::Dosar(int nrContract, int an, std::string beneficiar, std::string furnizor, int valoare, int perioada,
//             int nrcontracte)
//             : ContractInchiriere(nrContract,an,beneficiar,furnizor,valoare,perioada),
//               nrcontracte(nrcontracte){
//
//}

Dosar::~Dosar() {

}

void Dosar::Printinfo() {
    cout<<nrcontracte<<endl;

    for( int i=0; i<nrcontracte; i++)
    {contracts[i].ContractInchiriere::Printinfo();
        cout<<endl;}
}

void Dosar::inser_vec(const ContractInchiriere& other) {

    contracts.push_back(other);
    nrcontracte++;

}

Dosar::Dosar() {

}

Dosar::Dosar(int nrcontracte) : nrcontracte(nrcontracte) {

}

int Dosar::getnrcontracte() {

    return nrcontracte;
}

int Dosar::getperioadacontr(int i) {
    return contracts[i].getperioada();
}

int Dosar::getvaloarecontr(int i) {
    return contracts[i].getvaloare();
}

int Dosar::getnrcontr(int i) {
    return contracts[i].getnrcontract();
}

