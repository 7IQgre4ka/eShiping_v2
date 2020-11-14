#pragma once
#ifndef CARGO_H
#define CARGO_H
#include "vector"
#include "string"

class Cargo
{
    public:
        std::vector < std::vector < double > > cargoData;
        std::string cargoType;
        double cargoWeight;
        double cargoSize;//m3
        //std :: pair <int, int > cargoTemperature;
        int cargoId;
        double minTemp;
        double maxTemp;
        double cargoHumidity;

        int genId();
      /*
        string cargoType;
        double cargoWeight;
        double cargoSize;
        pair <int, int > cargoTemperature;
        int cargoHumidity;
        int cargoTypeConvert(string cargoType);
        string posibilityOfShipping(string cargoType, double cargoWeight, double cargoSize, pair <int, int > cargoTemperature, int cargoHumidity);
        vector <int> cargoGroups(bool flag = false);
        Cargo();*/

};

#endif // CARGO_H
