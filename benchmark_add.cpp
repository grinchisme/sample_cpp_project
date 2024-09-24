#include <benchmark/benchmark.h>
#include "my_add.hpp"

static void BM_my_add(benchmark::State &state)
{
    int a = state.range(0);
    int b = state.range(1);

    for (auto _ : state)
    {
        benchmark::DoNotOptimize(my_add(a, b));
    }
}

BENCHMARK(BM_my_add)->Args({3, 5});
BENCHMARK(BM_my_add)->Args({10, 20});

BENCHMARK_MAIN();