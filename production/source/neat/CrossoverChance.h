#ifndef NEAT_CROSSOVERCHANCE_H
#define NEAT_CROSSOVERCHANCE_H

#include <string>
#include "Gene.h"

class CrossoverChance {
public:
    virtual bool choose(const Gene &a, const Gene &b) = 0;
};

#endif //NEAT_CROSSOVERCHANCE_H
