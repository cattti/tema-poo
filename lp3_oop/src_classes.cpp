
#include <string>
#include <iostream>
#include "classes.h"

Animal::Animal(const std::string&  name, int age) : name(name), age(age) {}

Animal::~Animal() {}

void Animal::printDetails() const {}

Animal::Animal() {
}

std::istream& operator >> (std::istream& in, Animal& animal) {
    std::cout<<"\n"<<"Enter name: ";
    in >> animal.name;
    std::cout<<"Enter age: ";
    in >> animal.age;
    return in;
}

std::ostream &operator<<(std::ostream &out, Animal &animal) {
    out << "Name: " << animal.name << ", Age: " << animal.age;
    return out;
}



Vertebrate::Vertebrate(const std::string& name, int age) : Animal(name, age) {}
Vertebrate::Vertebrate() {
}


Fish::Fish(){
}
Fish::Fish(const std::string& name, int age, int length) : Vertebrate(name, age), length(length) {}

void Fish::printDetails() const {
    std::cout << "Fish: " << name << ", Age: " << age << ", Length: " << length<<std::endl;
}

int Fish::getLength() const {
    return length;
}

std::istream &operator>>(std::istream &in, Fish &fish) {
    in >> static_cast<Animal&>(fish);
    std::cout<<"Enter length of fish: ";
    in >> fish.length;
    return in;
}

Fish::~Fish() {
}




//Bird::Bird(const std::string& name, int age) : Vertebrate(name, age) {}

void Bird::printDetails() const {
    std::cout << "Bird: " << name << ", Age: " << age << ", Color: " << color << std::endl;
}

std::istream &operator>>(std::istream &in, Bird &bird) {
    in >> static_cast<Animal&>(bird);
    std::cout<<"Enter color of bird: ";
    in >> bird.color;
    return in;
}

Bird::Bird(const std::string &name, int age, const std::string &color) : Vertebrate(name, age), color(color) {
}

Bird::Bird() {
}

Bird::~Bird() {
}




//Mammal::Mammal(const std::string& name, int age) : Vertebrate(name, age) {}

void Mammal::printDetails() const {
    std::cout << "Mammal: " << name << ", Age: " << age << ", Fur color: " << fur_color<< std::endl;
}

std::istream &operator>>(std::istream &in, Mammal &mammal) {
    in >> static_cast<Animal&>(mammal);
    std::cout<<"Enter fur color: ";
    in >> mammal.fur_color;
    return in;
}

Mammal::Mammal(const std::string &name, int age, const std::string &fur_color):Vertebrate(name, age), fur_color(fur_color) {
}

Mammal::Mammal() {
}
Mammal::~Mammal() {
}




//Reptile::Reptile(const std::string& name, int age) : Vertebrate(name, age) {}

void Reptile::printDetails() const {
    std::cout << "Reptile: " << name << ", Age: " << age << ", Weight: "<< weight<<std::endl;
}

Reptile::Reptile(const std::string &name, int age, int weight) : Vertebrate(name, age),weight(weight) {
}

Reptile::Reptile() {
}

std::istream &operator>>(std::istream &in, Reptile &reptile) {
    in >> static_cast<Animal&>(reptile);
    std::cout<<"Enter weight: ";
    in >> reptile.weight;
    return in;
}

Reptile::~Reptile() {
}





