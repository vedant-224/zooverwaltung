#include "herde.h"

Herde::Herde()
{

}

Herde::Herde(const std::string &Bezeichnung, int Anzahl, double PlatzJetier) : Bezeichnung(Bezeichnung),
    Anzahl(Anzahl),
    PlatzJetier(PlatzJetier)
{}
Herde::Herde(const std::string &Bezeichnung, int Anzahl, double PlatzJetier, bool raubtier) : Bezeichnung(Bezeichnung),
    Anzahl(Anzahl),
    PlatzJetier(PlatzJetier),
    raubtier(raubtier)
{}
std::string Herde::getBezeichnung() const
{
    return Bezeichnung;
}

int Herde::getAnzahl() const
{
    return Anzahl;
}

double Herde::getPlatzJetier() const
{
    return PlatzJetier;
}

double Herde::getPlatzbedarf() const
{
    return Anzahl*PlatzJetier;
}

void Herde::setAnzahl(int newAnzahl)
{
    Anzahl += newAnzahl;
}

bool Herde::getRaubtier() const
{
    return raubtier;
}

