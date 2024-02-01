#ifndef TEHT4_H
#define TEHT4_H

class Asunto {
public:
    Asunto(){
        std::cout << "asunto luotu" << std::endl;
    }
    ~Asunto(){}



    int asukasMäärä;
    int neliöt;

    void määritä(int asukasMäärä, int neliöt){

        this->asukasMäärä = asukasMäärä;
        this->neliöt = neliöt;
        std::cout << "Asunto määritetty asukkaita = " << asukasMäärä << " neliöitä = " << neliöt << std::endl;
    }
    double laskeKulutus(double hinta){
        double kulutus = (hinta * asukasMäärä * neliöt);
        std::cout << "Asunnon kulutus kun hinta = " << hinta << " on " << kulutus << std::endl;
         return kulutus;


    }

};

class Kerros {
public:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
    virtual void määritäAsunnot(){
        std::cout << "määritetään kerroksen asunnot" << std::endl;

    }
    double laskeKulutus(double);
};

class Katutaso : public Kerros {

public:
    Katutaso(){
        std::cout << "katutaso luotu" << std::endl;
    }
    Asunto as1;
    Asunto as2;
    void määritäAsunnot() override{
        std::cout << "Määritetään 2 kpl katutason asuntoja" << std::endl;

    }
    double laskeKulutus(double);
};


class Kerrostalo {
public:
    Kerrostalo(){
        std::cout <<"kerrostalo luotu" << std::endl;
    }
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif
