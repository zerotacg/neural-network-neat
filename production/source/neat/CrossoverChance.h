#ifndef NEAT_CROSSOVERCHANCE_H
#define NEAT_CROSSOVERCHANCE_H

#include <string>

class CrossoverChance {
public:
    virtual bool choose(const std::string &a, const std::string &b) = 0;
};

#endif //NEAT_CROSSOVERCHANCE_H
