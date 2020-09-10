#include <random>
#include <array>
#include <ctime>
#include <iostream>

namespace rng {
  uint64_t rol64 (uint64_t x, int k) {
    return (x << k) | (x >> (64 - k));
  }

  struct xoshiro256ss_state {
	  uint64_t s[4];
  };


  uint64_t xoshiro256ss(struct xoshiro256ss_state *state) {
    uint64_t *s = state->s;
    uint64_t const result = rol64(s[1] * 5, 7) * 9;
    uint64_t const t = s[1] << 17;

    s[2] ^= s[0];
    s[3] ^= s[1];
    s[1] ^= s[2];
    s[0] ^= s[3];

    s[2] ^= t;
    s[3] = rol64(s[3], 45);

    return result;
  }

  uint64_t rollXos () {
    struct xoshiro256ss_state state = {
      (uint64_t) rand(),
      (uint64_t) rand(),
      (uint64_t) rand(),
      (uint64_t) rand()
    };
    return xoshiro256ss(&state) / 1000000;
  }


  int initRng () {
    srand((int) time(0));
    int seed = rand();
    srand48(seed);
    return seed;
  }

  int genInt () {
    return rollXos();
  }

  double genDouble () {
    double *table = new double[10];
    double floater = (double) (rand()) / (double) (RAND_MAX);
    floater += 0.0001;
    for (int i = 0; i < 10; i++) {
      table[i] = rollXos() * floater;
    }
    int idx = rollXos() % 10;

    if (idx > 9) {
      return table[rand() % 10];
      delete table;
    } else {
      return table[idx];
      delete table;
    }
  }
}