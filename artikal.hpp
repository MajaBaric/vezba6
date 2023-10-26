#ifndef ARTIKL_HPP_INCLUDED
#define ATRIKAL_HPP_INCLUDED

#include<iostream>
#include "DinString.hpp"

class artikal:public DinString{
    DinString naziv;
    double cena;
    int instanci; // deljeno polje
public:
    artikal (const char[], const double);
    artikal (const DinString&, const double);
    artikal (const artikal&);

    double getCena()const;

    char getNaziv() const;

};

#endif