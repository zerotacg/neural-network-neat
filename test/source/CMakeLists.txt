add_executable(chromosome-crossover-test ChromosomeCrossoverTest.cpp)
target_link_libraries(chromosome-crossover-test libneat gtest_main)
add_test(NAME chromosome-crossover-test COMMAND chromosome-crossover-test)