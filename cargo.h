#ifndef CARGO_H
#define CARGO_H
#include "string"
#include "vector"
#include "queue"
#include <help.h>

using namespace std;

class Cargo
{
    public:
        int cargoType;
        double cargoWeight;
        double cargoSize;//m3
        int cargoId;
        double minTemp;
        double maxTemp;

        string posibilityOfShipping(string cargoType, double cargoWeight, double cargoSize, pair <int, int > cargoTemperature, int cargoHumidity);
      /*  vector <vector < double > > cargoData;
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
