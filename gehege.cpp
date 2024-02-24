#include "gehege.h"

Gehege::Gehege()
{

}

Gehege::Gehege(int ID, double MaxPlatz) : ID(ID),
    MaxPlatz(MaxPlatz)
{}

int Gehege::getID() const
{
    return ID;
}

double Gehege::getMaxPlatz() const
{
    return MaxPlatz;
}
double Gehege::getPlatz()
{  double sum=0;
    for(const auto&t1:tieren)
    {
        sum+=t1.getPlatzbedarf();

    }
    return sum;
}
bool Gehege::aufnehmen(const Herde &h1)
{

    if(h1.getRaubtier())
    {
        return false;
    }
    if(MaxPlatz>=getPlatz()+h1.getPlatzbedarf())
    {
        tieren.push_back(h1);
        return true;
    }

    return false;

}



std::vector<Herde> Gehege::getTieren() const
{
    return tieren;
}





bool  Raubtiergehege::aufnehmen(const Herde &h1)
{

    for(const auto& h2:getTieren())
    {
        if(h1.getRaubtier())
        {
            if(h2.getRaubtier())
            {
                Raubtiere.push_back((h1));
                return true;
            }
        }

    }
    bool flag=false;
    for(const auto& h2:getTieren())
    {
        if(!h1.getRaubtier())
        {
            if(h2.getRaubtier())
            {
                flag =true;
                break;
            }
        }

    }
    if(!flag)
    {
        Raubtiere.push_back((h1));
        return true;

    }


    return false;
}
