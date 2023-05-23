#include <iostream>
#include <list>
#include "classes.h"




int main() {

    Vertebrate *fis = new Fish("catfish",2,5);
    fis -> printDetails();

    Fish salmon("longfish",4,6);
    Fish fishes("Salmon", 2, 4);
    Bird birdies("Bluebird", 3, "red");
    Mammal bear("Polar",7, "brown");
    Mammal p_bear("polar bear",10,"white");
    Reptile snake("clopot",2,8);

    salmon.printDetails();
    fishes.printDetails();
    birdies.printDetails();
    bear.printDetails();
    p_bear.printDetails();
    snake.printDetails();
//    Fish fishy;
//    std::cin>>fishy;
//    fishy.printDetails();
//    Bird pasare;
//    std::cin>>pasare;
//    pasare.printDetails();



    AtlasZoologic<Animal> zoo;
    Animal* animal1 = new Fish("Salmon", 2, 4);
            zoo += animal1;
    Animal* animal2 = new Bird("gaina",3,"alb");
            zoo += animal2;
    Animal* animal3 = new Reptile("soparla",6,9);
            zoo += animal3;
    Animal* animal4 = new Mammal("vulpe",5,"rosu");
            zoo += animal4;
    std::cout<<"Atlas animale: "<<std::endl;
    zoo.printAnimals();

    AtlasZoologic<Fish> fishAtlas;
//    zoo += new Bird("ciocanitoare",2,"negru");
//    zoo += new Fish("fish",4,5);
//    zoo.printAnimals();
//    animalAtlas += new auto& static_cast<Animal&>(auto&)

//    fishAtlas += new Fish("Salmon", 2, 4);
//    int n = 3, ani, lungime;
//    std::string nume;
//    for(int i = 1; i <= n; i++){
//        std::cout << "Enter name for fish number "<<i<<": ";
//        std::cin >> nume;
//        std::cout << "Enter age: ";
//        std::cin >> ani;
//        std::cout << "Enter length: ";
//        std::cin >> lungime;
//        fishAtlas += new Fish(nume, ani,lungime);
//    }
//
//    fishAtlas.printFish();


}