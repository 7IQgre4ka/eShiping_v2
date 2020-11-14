#ifndef CARGO_H
#define CARGO_H
#include "string"
#include "vector"
#include "queue"

using namespace std;

class Cargo
{
    public:
        vector <vector < double > > cargoData;
        string cargoType;
        double cargoWeight;
        double cargoSize;
        pair <int, int > cargoTemperature;
        int cargoHumidity;
        int cargoTypeConvert(string cargoType);
        string posibilityOfShipping(string cargoType, double cargoWeight, double cargoSize, pair <int, int > cargoTemperature, int cargoHumidity);
        vector <int> cargoGroups();
        Cargo();

};

#endif // CARGO_H
