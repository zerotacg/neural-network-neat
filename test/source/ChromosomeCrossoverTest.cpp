#include <string>
#include <neat/GeneticAlgorithm.h>
#include "gtest/gtest.h"

class Foo : public CrossoverChance {
public:
    virtual bool choose(const Gene &a, const Gene &b) {
        return true;
    }
};

class Bar : public CrossoverChance {
public:
    virtual bool choose(const Gene &a, const Gene &b) {
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
