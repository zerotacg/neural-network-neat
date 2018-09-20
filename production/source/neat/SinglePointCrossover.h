#ifndef NEAT_GENETICALGORITHM_H
#define NEAT_GENETICALGORITHM_H

#include <string>
#include "CrossoverChance.h"
#include "Chromosome.h"

class SinglePointCrossover {
private:

public:
    explicit SinglePointCrossover();

    Chromosome crossover(const Chromosome &a, const Chromosome &b, size_t crossoverPoint = 0);
};


#endif //NEAT_GENETICALGORITHM_H
