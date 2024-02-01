#ifndef H_SIGNAL_GENERATOR_HPP
#define H_SIGNAL_GENERATOR_HPP

#include <chrono>
#include <complex>
#include <utility>
#include <vector>

using Complex = std::complex<double>;

class SignalGenerator
{
public:
    SignalGenerator() = delete;

    SignalGenerator(std::chrono::nanoseconds duration, std::chrono::nanoseconds sampling_period);

    void
    GenerateSine(std::vector<Complex>& signal, const std::pair<double, double>& parameters);

    void
    ApplyHannWindow(std::vector<Complex>& signal);

private:
    std::chrono::nanoseconds mDuration;
    std::chrono::nanoseconds mSamplingPeriod;
};

#endif  // H_SIGNAL_GENERATOR_HPP