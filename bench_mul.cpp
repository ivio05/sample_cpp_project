#include <benchmark/benchmark.h>

#include "my_mul.hpp"

static void BM_Mul(benchmark::State& state) {
  for (auto _ : state) {
    my_mul(7, 8);
  }
}

BENCHMARK(BM_Mul);

BENCHMARK_MAIN();