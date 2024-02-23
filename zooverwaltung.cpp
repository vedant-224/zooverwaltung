#include "zooverwaltung.h"
#include<iostream>
#include<vector>
using namespace std;
Zooverwaltung::Zooverwaltung()
{

}

void Zooverwaltung::zooErweitern(double platz)
{
    gehegen.push_back(new Gehege(oldID++,platz));

}

bool Zooverwaltung::aufnehmenNachId(int id, const Herde &herde)
{
    for(const auto &g1:gehegen)
    {
        if(g1->getID()==id)
        {
            if(g1->aufnehmen(herde))
            {
                return true;
            }

        }


    }
    return false;
}

bool Zooverwaltung::aufnehmen(const Herde &herde)
{
    for(const auto&g2:gehegen)
    {
        for( auto& t2:g2->getTieren())
        {
            if(herde.getBezeichnung()==t2.getBezeichnung())
            {
                t2.setAnzahl(herde.getAnzahl());
                return true;
            }


        }
    }
    for(const auto&g1:gehegen)
    {
        if(g1->aufnehmen(herde))
        {
            return true;
        }
    }
    return false;
}

void Zooverwaltung::inventur() const
{
    cout<<"anzahl gehege"<<endl;
    cout<<gehegen.size();
    cout<<endl;
    double gesamtbedarf=0.0;
    for(const auto &g1:gehegen)
    {

        cout<<"maximal platz";
        cout<<endl;
        cout<<g1->getMaxPlatz();
        cout<<endl;
        cout<<"id"<<endl;
        cout<<g1->getID();
        cout<<endl;
        cout<<" rest place   ";
        cout<<g1->getMaxPlatz()-g1->getPlatz();
        cout<<endl;
        for(const auto &t1:g1->getTieren())
        {
            gesamtbedarf=t1.getPlatzbedarf();
            cout<<t1.getBezeichnung();
            cout<<endl;
            cout<<t1.getAnzahl();
            cout<<endl;

        }


    }


    cout<<"gesamtplatz"<<endl;
    cout<<gesamtbedarf;

}

Zooverwaltung::~Zooverwaltung()
{
    for(auto g1:gehegen)
    {
        delete g1;
    }
}
