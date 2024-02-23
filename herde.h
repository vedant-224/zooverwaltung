#ifndef HERDE_H
#define HERDE_H
#include<iostream>


class Herde
{
public:
    Herde();
    Herde(const std::string &Bezeichnung, int Anzahl, double PlatzJetier);
    Herde(const std::string &Bezeichnung, int Anzahl, double PlatzJetier, bool raubtier);
    std::string getBezeichnung() const;
    int getAnzahl() const;
    double getPlatzJetier() const;
    double getPlatzbedarf()const ;

    void setAnzahl(int newAnzahl);

    bool getRaubtier() const;

private:
    std::string Bezeichnung;
    int Anzahl;
    double PlatzJetier;
    bool raubtier;
};

#endif // HERDE_H
