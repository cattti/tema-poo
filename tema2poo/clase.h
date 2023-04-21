#include <string>
#include <vector>
#include<iostream>

using namespace std;

class Contract{
protected:
    int nrContract;
    int an;
    std::string beneficiar;
    std::string furnizor;
    int valoare;
public:
    Contract();
    Contract(int nrContract, int an, std::string beneficiar, std::string furnizor, int valoare);
    Contract(int nrContract);
    virtual void Printinfo();
    virtual void Printnrcontract();
    virtual int getvaloare();
    virtual int getnrcontract();
    virtual ~Contract();

    friend std::istream& operator >> (std::istream& in, Contract& ob);
};


class ContractInchiriere :public Contract {
protected:
    int perioada;

public:
    ContractInchiriere();
    ContractInchiriere(int nrContract, int an, std::string beneficiar, std::string furnizor, int valoare, int perioada);

    virtual void Printinfo();

    virtual int getperioada();

    ~ContractInchiriere();


};




class Dosar : public ContractInchiriere{
    int nrcontracte=0;
    std::vector<ContractInchiriere> contracts;
public:

    Dosar();

//    Dosar(int nrContract, int an, std::string beneficiar, std::string furnizor, int valoare, int perioada,
//          int nrcontracte);

    Dosar(int nrcontracte);

    int getnrcontracte();

    void Printinfo() override;

    int getperioadacontr(int i);

    int getvaloarecontr(int i);

    int getnrcontr(int i);

    void inser_vec( const ContractInchiriere& other);

    ~Dosar();
};
