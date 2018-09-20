#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm() {}

Chromosome GeneticAlgorithm::crossover(const Chromosome &a, const Chromosome &b, int crossoverPoint) {
    Chromosome child;

    if (crossoverPoint == 1) {
        for (const auto gene : b) {
            child.push_back(gene);
        }
    } else {


        for (const auto gene : a) {
            child.push_back(gene);
        }
    }

    return child;
}
