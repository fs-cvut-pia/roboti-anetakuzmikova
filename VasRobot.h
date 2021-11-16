#ifndef VASROBOT_H_INCLUDED
#define VASROBOT_H_INCLUDED
#include "Prohledavac.h"


using namespace std;

class VasRobot : public Prohledavac
{
public:
    VasRobot();

    virtual bool start(Bludiste & map);//u slepeho robota ta metoda muze byt prazdna, ma jenom vracet true, pokud se robot nastartuje
    virtual bool start(BludisteOdkryte & map);
    virtual bool stop();//kdyz vrati true, robota se povedlo vypnout
    virtual void krok(Bludiste & map);
    virtual void krok(BludisteOdkryte & map);
    virtual std::string jmeno();

private:
    Souradnice s;



};
#endif // VASROBOT_H_INCLUDED

