#ifndef NEAT_GENETICALGORITHM_H
#define NEAT_GENETICALGORITHM_H

#include <string>
#include "CrossoverChance.h"

class GeneticAlgorithm {
private:
    CrossoverChance &crossoverChance;

public:
    explicit GeneticAlgorithm(CrossoverChance &crossoverChance);

    std::string crossover(const std::string &a, const std::string &b);
};


#endif //NEAT_GENETICALGORITHM_H
