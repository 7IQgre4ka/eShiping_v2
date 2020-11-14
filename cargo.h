#ifndef CARGO_H
#define CARGO_H
#include "string"
#include "vector"
#include "queue"

using namespace std;

class Cargo
{
    public:
        string cargoType;
        double cargoWeight;
        double cargoSize;
        pair <int, int > cargoTemperature;
        int cargoHumidity;
        int cargoTypeConvert(string cargoType);
        string posibityOfShipping(string cargoType, double cargoWeight, double cargoSize, pair <int, int > cargoTemperature, int cargoHumidity);
        int cargoData[6][1000];
        queue <vector <int> > cargoGroups;
        Cargo();

};

#endif // CARGO_H
