#include "help.h"
#include "vector"
#include "time.h"

namespace hl {

int typeConvert(std::string cargoType)
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
//

    return cargoTypeInt;
}

int isSuitableForShipping(Cargo cargo)
{
    int cargoTypeInt = hl::typeConvert(cargo.cargoType);
        std::vector <double> tmpVectorPush(8);
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

        tmpVectorPush[1] = cargo.cargoSize;
        tmpVectorPush[2] = cargo.cargoWeight;
        tmpVectorPush[0] = cargo.minTemp;
        tmpVectorPush[4] = cargo.maxTemp;
        tmpVectorPush[5] = cargo.cargoHumidity;
        tmpVectorPush[6] = cargoTypeInt;
        srand (time(NULL));
        int tmp = (int)(size_t)rand % 1000000;
        tmpVectorPush[7] = tmp;
        //2 - red; 1 - orange; 0 - green;
        if(tmpVectorPush[3] == 2)
        {
            return 2;
        }
        if(tmpVectorPush[3] == 1)
        {
            cargo.cargoData.push_back(tmpVectorPush);
            return 1;
        }
        if(tmpVectorPush[3] == 1)
        {
            cargo.cargoData.push_back(tmpVectorPush);
            return 0;
        }
        return 2;
}


