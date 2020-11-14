#include "cargo.h"

using namespace std;

int Cargo :: cargoTypeConvert(string cargoType)
{
  int cargoTypeInt;
  if(cargoType == "Medicines")
    {
      cargoTypeInt = 1;
    }
  if(cargoType == "Valuable paintings")
    {
      cargoTypeInt = 2;
    }
  if(cargoType == "Animals")
    {
      cargoTypeInt = 3;
    }
  if(cargoType == "Liquid")
    {
      cargoTypeInt = 4;
    }
  if(cargoType == "Medicines with narco")
    {
      cargoTypeInt = 5;
    }
  if(cargoType == "Luxury products")
    {
      cargoTypeInt = 6;
    }
  if(cargoType == "Military items")
    {
      cargoTypeInt = 7;
    }
  if(cargoType == "Flowers")
    {
      cargoTypeInt = 8;
    }


    return cargoTypeInt;
}

string Cargo :: posibilityOfShipping(string cargoType, double cargoWeight, double cargoSize, pair <int, int > cargoTemperature, int cargoHumidity)
{
    int cargoTypeInt = cargoTypeConvert(cargoType);
    vector <double> tmpVectorPush(7);
    //0 - green; 1 - orange; 2 - red
    switch(cargoTypeInt)
    {
        case 1 :
            tmpVectorPush[0] = 0;
        break;
    case 2 :
        tmpVectorPush[3] = 1;
    break;
    case 3 :
        tmpVectorPush[3] = 0;
    break;
    case 4 :
        tmpVectorPush[3] = 2;
    break;
    case 5 :
        tmpVectorPush[3] = 1;
    break;
    case 6 :
        tmpVectorPush[3] = 0;
    break;
    case 7 :
        tmpVectorPush[3] = 2;
    break;
    case 8 :
        tmpVectorPush[3] = 0;
    break;
    }

    tmpVectorPush[1] = cargoSize;
    tmpVectorPush[2] = cargoWeight;
    tmpVectorPush[0] = cargoTemperature.first;
    tmpVectorPush[4] = cargoTemperature.second;
    tmpVectorPush[5] = cargoHumidity;
    tmpVectorPush[6] = cargoTypeInt;

    if(tmpVectorPush[3] == 2)
    {
        return "Red";
    }
    if(tmpVectorPush[3] == 1)
    {
        cargoData.push_back(tmpVectorPush);
        return "Orange";
    }
    if(tmpVectorPush[3] == 1)
    {
        cargoData.push_back(tmpVectorPush);
        return "Green";
    }
    return "Red";
}



