
#ifndef GEHEGE_H
#define GEHEGE_H

#include"herde.h"
#include<iostream>
#include<vector>
class Gehege
{
public:
    Gehege();
    Gehege(int ID, double MaxPlatz);
    int getID() const;
    double getMaxPlatz() const;
    virtual bool aufnehmen(const Herde& h1);
    double getPlatz();

    std::vector<Herde> getTieren() const;

private:
    int ID;
    double MaxPlatz;
    std::vector<Herde> tieren;


};


class Raubtiergehege:public Gehege
{
public:
    bool aufnehmen(const Herde &h1) override;



private:
    std:: vector<Herde> Raubtiere;





};

#endif // GEHEGE_H
