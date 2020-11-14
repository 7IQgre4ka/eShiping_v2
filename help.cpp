#include "help.h"

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


    return cargoTypeInt;
}

int isSuitableForShipping(Cargo cargo){

}

}
