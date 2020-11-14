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
        //int cargoId;
        double minTemp;
        double maxTemp;
        double cargoHumidity;

        int genId();
};

#endif // CARGO_H
