#ifndef ZOOVERWALTUNG_H
#define ZOOVERWALTUNG_H
#include<iostream>
#include"gehege.h"
#include<vector>
using namespace std;
class Zooverwaltung
{
public:
    Zooverwaltung();
    void zooErweitern(double platz);
    bool aufnehmenNachId(int id,const Herde &herde);
    bool aufnehmen(const Herde&herde);
    void inventur() const ;
    ~Zooverwaltung();
private:
    std::vector<Gehege*> gehegen;
    int oldID=1;
};

#endif // ZOOVERWALTUNG_H
