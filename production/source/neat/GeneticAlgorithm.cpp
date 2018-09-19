#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm(CrossoverChance &crossoverChance) : crossoverChance(crossoverChance) {}

std::string GeneticAlgorithm::crossover(const std::string &a, const std::string &b) {
    std::string child;

    if (crossoverChance.choose(a, b)) {
        for (const auto gene : a) {
            child.push_back(gene);
        }
    } else {
        for (const auto gene : b) {
            child.push_back(gene);
        }
    }

    return child;
}
