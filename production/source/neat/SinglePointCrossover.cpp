#include "SinglePointCrossover.h"

SinglePointCrossover::SinglePointCrossover() {}

Chromosome SinglePointCrossover::crossover(const Chromosome &a, const Chromosome &b, int crossoverPoint) {
    Chromosome child;
    auto childInserter = std::back_inserter(child);

    auto begin = a.begin();
    auto end = std::next(begin, crossoverPoint);
    std::copy(begin, end, childInserter);
    
    auto begin_b = std::next(b.begin(), crossoverPoint);
    auto end_b = b.end();
    std::copy(begin_b, end_b, childInserter);

    return child;
}
