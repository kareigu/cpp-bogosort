#include <random>
#include <array>
#include <ctime>
#include <iostream>
#include "../include/logger.hpp"

namespace rng {
  void initRng () {
    srand((int) time(0));
    int seed = rand();
    logger::debug("Seed", seed);
    srand48(seed);
  }

  int gen () {
    return rand() % 1000;
  }

  int genInt () {
    return gen();
  }

  double genDouble () {
    double *table = new double[10];
    for (int i = 0; i < 10; i++) {
      table[i] = gen() * 0.33125 / 1.52134;
    }
    return table[rand() % 10];
  }
}