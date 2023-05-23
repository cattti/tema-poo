
#ifndef LP3_OOP_CLASSES_H
#define LP3_OOP_CLASSES_H
#endif
#include <string>
#include <vector>
#include <iostream>
#include <list>


class Animal {
protected:
    std::string name;
    int age;

public:
    Animal();
    Animal(const std::string&  name, int age);
    virtual ~Animal();

    virtual void printDetails() const = 0;

    friend std::istream& operator >> (std::istream& in, Animal& animal);
    friend std::ostream& operator << (std::ostream& out, Animal& animal);
};

class Vertebrate : public Animal {
public:
    Vertebrate();
    Vertebrate(const std::string& name, int age);

};

class Fish : public Vertebrate {
private:
    int length;

public:
    Fish();
    Fish(const std::string& specie, int ani, int length);

    void printDetails() const override;

    int getLength() const;

    friend std::istream& operator >> (std::istream& in, Fish& fish);

    ~Fish();
};



class Bird : public Vertebrate {
protected:
    std::string color;
public:
    Bird();
//    Bird(const std::string& name, int age);
    Bird(const std::string& name, int age, const std::string& color );
    void printDetails() const override;

    friend std::istream& operator >> (std::istream& in, Bird& bird);

    ~Bird();
};



class Mammal : public Vertebrate {
private:
    std::string fur_color;
public:
    Mammal();
    Mammal(const std::string& name, int age, const std::string& fur_color);
//    Mammal(const std::string& name, int age);

    void printDetails() const override;

    ~Mammal();

    friend std::istream& operator >> (std::istream& in, Mammal& mammal);
};



class Reptile : public Vertebrate {
protected:
    int weight;
public:
    Reptile();
    Reptile(const std::string& name, int age, int weight);
//    Reptile(const std::string& name, int age);

    void printDetails() const override;

    friend std::istream& operator >> (std::istream& in, Reptile& reptile);

    ~Reptile();
};





template <typename T>
class AtlasZoologic {
private:
    std::list<T *> animals;
    int countAnimals;

public:
    AtlasZoologic() : countAnimals(0) {
    }

    ~AtlasZoologic() {
        for (auto &animal: animals)
            delete animal;
    }

    void operator+=(T *animal) {
        animals.push_back(animal);
        countAnimals++;
    }

    void printAnimals() const {
        for (const auto &animal: animals)
            animal->printDetails();
    }
};


template <>
class AtlasZoologic<Fish> {
private:
    std::list<Fish*> fishList;
    int countPredatoryF;

public:
    AtlasZoologic() : countPredatoryF(0) {}

    ~AtlasZoologic(){
        for (auto& fish : fishList)
            delete fish;
    }

    void operator+=(Fish* fish) {
        fishList.push_back(fish);
        if (fish -> getLength() > 1)
            countPredatoryF++;
    }

    void printFish() const {
        for (const auto& fish : fishList)
            fish->printDetails();
    }
    void printcountPredatoryF() const {
        std::cout<<" number of predatory fish: "<<countPredatoryF;
    }
};

