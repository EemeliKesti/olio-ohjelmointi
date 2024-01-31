#ifndef TEHT3_H
#define TEHT3_H

#include <iostream>
#include <string>

class Chef {
public:
    Chef(std::string chefName) : name(chefName) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    virtual ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }

protected:
    std::string name;
};

class ItalianChef : public Chef {
public:
    ItalianChef(std::string chefName, int vesi, int jauhot) : Chef(chefName), vesi(vesi), jauhot(jauhot) {
        std::cout << "Chef " << name << " konstruktori" << std::endl;
    }

    ~ItalianChef() override {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }

    void makePasta() {
        std::cout << "Chef " << name << " makes pasta with special recipe" << std::endl;
        std::cout << "Chef " << name << " uses jauhot = " << jauhot << std::endl;
        std::cout << "Chef " << name << " uses vesi = " << vesi << std::endl;
    }

    std::string getName() {
        return name;
    }

private:
    int vesi;
    int jauhot;
};

#endif
