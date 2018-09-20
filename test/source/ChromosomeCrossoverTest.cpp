#include <string>
#include <neat/GeneticAlgorithm.h>
#include "gtest/gtest.h"

TEST(ChromosomeCrossoverTest, useAllGenesFromOneParent) {
    auto ga = GeneticAlgorithm();
    auto a = std::string("a");
    auto b = std::string("b");
    auto child = ga.crossover(a, b, 0);

    ASSERT_EQ(a, child);
}

TEST(ChromosomeCrossoverTest, useAllGenesFromOtherParent) {
    auto ga = GeneticAlgorithm();
    auto a = std::string("c");
    auto b = std::string("d");
    auto child = ga.crossover(a, b, 1);

    ASSERT_EQ(b, child);
}
