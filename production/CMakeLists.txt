
add_executable(neat source/main.cpp)
add_library(libneat SHARED source/neat/Chromosome.h source/neat/SinglePointCrossover.cpp source/neat/SinglePointCrossover.h source/neat/CrossoverChance.h source/neat/Gene.h)
