#include "Utils/Random.h"

namespace SingleNet
{
    namespace Random
    {
        static std::uniform_real_distribution<float> float_dist(-1.0f, 1.0f);
        static std::uniform_real_distribution<double> double_dist(0.0, 1.0);
        static std::bernoulli_distribution bool_dist(0.5);
        
        template <>
        float rand() {
            return float_dist(mt);
        }

        template <>
        double rand() {
            return double_dist(mt);
        }

        template <>
        bool rand() {
            return bool_dist(mt);
        }
    }
}