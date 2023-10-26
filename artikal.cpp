#include "artikal.hpp"

    artikal::artikal (const char n[]=0, const double c=0) : naziv(), cena(c){}
    artikal::artikal (const DinString& n, const double c){
        naziv = n;
        cena = c;
    }
    artikal::artikal (const artikal& a){
        naziv = a.naziv;
        cena = a.cena;
    }

    double artikal::getCena()const{
        return this->cena;
    }