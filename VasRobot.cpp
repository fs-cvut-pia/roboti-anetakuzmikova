#include "VasRobot.h"
#include "Prohledavac.h"
#include "Bludiste.h"
#include <iostream>

using namespace std;


VasRobot::VasRobot() {}

bool VasRobot::start(Bludiste & map)
{
return true;
}

bool VasRobot::start(BludisteOdkryte & map) {}
bool VasRobot::stop()
//kdyz vrati true, robota se povedlo vypnout
{
return true;
}
void VasRobot::krok(Bludiste & map)
{
bool doprava;
bool doleva;
bool dolunovy;


Souradnice akt_poloha;


doprava=map.vpravo();
while (doprava==1)
{
    doprava=map.vpravo();
    akt_poloha=map.poloha();
    cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";;
}


if (map.nahoru()==1)
{
      doleva=map.vlevo();
      while (doleva==1)
      {
          doleva=map.vlevo();
          akt_poloha=map.poloha();
          cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";
      }
}
if (map.nahoru()==0)
{
    while (map.dolu()== 1)
    {

    doleva=map.vlevo();
      while (doleva==1)
      {
          doleva=map.vlevo();
          akt_poloha=map.poloha();
          cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";
      }

    doprava=map.vpravo();
    while (doprava==1)
    {
        doprava=map.vpravo();
        akt_poloha=map.poloha();
        cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";
    }
    }


}






















}

void VasRobot::krok(BludisteOdkryte & map){}


std::string VasRobot::jmeno()
{
return "Evzen";
}

/*doprava=map.vpravo();
while (doprava==1)
{
    doprava=map.vpravo();
    akt_poloha=map.poloha();
    cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";;
}
 if (doprava==0)
{
    dolunovy=map.nahoru();
    if (dolunovy=1)
    {
      cout<<"sel jsem dolu\n";
      doleva=map.vlevo();
      if (doleva==1)
      {
          cout<<"sel jsem doleva\n";
      }
    }

}*/
