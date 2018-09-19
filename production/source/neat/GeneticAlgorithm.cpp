#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm(CrossoverChance &crossoverChance) : crossover_chance_(crossoverChance) {}

Chromosome GeneticAlgorithm::crossover(const Chromosome &a, const Chromosome &b) {
    Chromosome child;

    for (const auto gene : a) {
        if (crossover_chance_.choose(gene, gene)) {
            child.push_back(gene);
        }
    }
    for (const auto gene : b) {
        if (!crossover_chance_.choose(gene, gene)) {
            child.push_back(gene);
        }
    }

    return child;
}
