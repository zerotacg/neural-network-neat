#include <string>
#include <neat/SinglePointCrossover.h>
#include "gtest/gtest.h"

TEST(ChromosomeCrossoverTest, useAllGenesFromOneParent) {
    auto ga = SinglePointCrossover();
    auto a = std::string("a");
    auto b = std::string("b");
    auto child = ga.crossover(a, b, 1);

    ASSERT_EQ(a, child);
}

TEST(ChromosomeCrossoverTest, useAllGenesFromOtherParent) {
    auto ga = SinglePointCrossover();
    auto a = std::string("c");
    auto b = std::string("d");
    auto child = ga.crossover(a, b, 0);

    ASSERT_EQ(b, child);
}

TEST(ChromosomeCrossoverTest, useHalfOfEachParent) {
    auto ga = SinglePointCrossover();
    auto a = std::string("ef");
    auto b = std::string("ghi");
    auto child = ga.crossover(a, b, 1);

    ASSERT_EQ("ehi", child);
}

TEST(ChromosomeCrossoverTest, crossoverPointIsOutsideOfFirstParentsRange) {
    auto ga = SinglePointCrossover();
    auto a = std::string("j");
    auto b = std::string("klm");
    auto child = ga.crossover(a, b, 2);

    ASSERT_EQ("jm", child);
}
