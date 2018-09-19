#ifndef NEAT_GENETICALGORITHM_H
#define NEAT_GENETICALGORITHM_H

#include <string>
#include "CrossoverChance.h"
#include "Chromosome.h"

class GeneticAlgorithm {
private:
    CrossoverChance &crossover_chance_;

public:
    explicit GeneticAlgorithm(CrossoverChance &crossoverChance);

    Chromosome crossover(const Chromosome &a, const Chromosome &b);
};


#endif //NEAT_GENETICALGORITHM_H
