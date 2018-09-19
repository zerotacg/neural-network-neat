#include <string>
#include <neat/GeneticAlgorithm.h>
#include <neat/CrossoverChance.h>
#include "gtest/gtest.h"
#include "neat/Chromosome.h"

class Foo : public CrossoverChance {
public:
    virtual bool choose(const std::string &a, const std::string &b) {
        return true;
    }
};

class Bar : public CrossoverChance {
public:
    virtual bool choose(const std::string &a, const std::string &b) {
        return false;
    }
};

TEST(ChromosomeCrossoverTest, useAllGenesFromOneParent) {
    auto crossover = Foo();
    auto ga = GeneticAlgorithm(crossover);
    auto a = std::string("abcd");
    auto b = std::string("efgh");
    auto child = ga.crossover(a, b);

    ASSERT_EQ(a, child);
}

TEST(ChromosomeCrossoverTest, useAllGenesFromOtherParent) {
    auto crossover = Bar();
    auto ga = GeneticAlgorithm(crossover);
    auto a = std::string("abcd");
    auto b = std::string("efgh");
    auto child = ga.crossover(a, b);

    ASSERT_EQ(b, child);
}
