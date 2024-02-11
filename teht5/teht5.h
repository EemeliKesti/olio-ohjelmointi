#ifndef TEHT5_H
#define TEHT5_H

#include <iostream>

class Asunto {
public:
    Asunto() {
        std::cout << "asunto luotu" << std::endl;
    }

    ~Asunto() {}

    int asukasMäärä;
    int neliöt;

    void määritä(int asukasMäärä, int neliöt) {
        this->asukasMäärä = asukasMäärä;
        this->neliöt = neliöt;
        std::cout << "Asunto määritetty asukkaita = " << asukasMäärä << " neliöitä = " << neliöt << std::endl;
    }

    double laskeKulutus(double hinta) {
        double kulutus = hinta * asukasMäärä * neliöt;
        std::cout << "Asunnon kulutus kun hinta = " << hinta << " on " << kulutus << std::endl;
        return kulutus;
    }
};

class Kerros {
public:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;

    Kerros() {
        as1 = new Asunto();
        as2 = new Asunto();
        as3 = new Asunto();
        as4 = new Asunto();
    }

    ~Kerros() {
        delete as1;
        delete as2;
        delete as3;
        delete as4;
    }

    virtual void määritäAsunnot() {
        std::cout << "määritetään kerroksen asunnot" << std::endl;
    }

    double laskeKulutus(double);
};

class Katutaso : public Kerros {


public:
    Asunto* as1;
    Asunto* as2;
    Katutaso(){
        std::cout << "katutaso luotu" << std::endl;
        as1 = new Asunto;
        as2 = new Asunto;
    }
    ~Katutaso(){
        delete as1;
        delete as2;
    }
    void määritäAsunnot() override {
        std::cout << "Määritetään 2 kpl katutason asuntoja" << std::endl;
    }

    double laskeKulutus(double);
};

class Kerrostalo {
public:
    Kerrostalo() {
        std::cout << "kerrostalo luotu" << std::endl;
    }

    ~Kerrostalo() {}

    double laskeKulutus(double);
private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
};

#endif
