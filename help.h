#pragma once
#ifndef HELP_H
#define HELP_H
#include <string>
#include <cargo.h>

namespace hl{
int typeConvert(std::string cargoType);
int isSuitableForShipping(Cargo cargo);
}
#endif // HELP_H
