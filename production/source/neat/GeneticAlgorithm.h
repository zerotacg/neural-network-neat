#ifndef NEAT_GENETICALGORITHM_H
#define NEAT_GENETICALGORITHM_H

#include <string>
#include "CrossoverChance.h"
#include "Chromosome.h"

class GeneticAlgorithm {
private:

public:
    explicit GeneticAlgorithm();

    Chromosome crossover(const Chromosome &a, const Chromosome &b, int crossoverPoint = 0);
};


#endif //NEAT_GENETICALGORITHM_H
