
add_executable(neat source/main.cpp)
add_library(libneat SHARED source/neat/Chromosome.cpp source/neat/Chromosome.h source/neat/GeneticAlgorithm.cpp source/neat/GeneticAlgorithm.h source/neat/CrossoverChance.h)
