#ifndef ATG_ENGINE_SIM_UNITS_H
#define ATG_ENGINE_SIM_UNITS_H

namespace units {
    // Force
    extern constexpr double N = 1.0;

    extern constexpr double lbf = N * 4.44822;

    // Mass
    extern constexpr double kg = 1.0;
    extern constexpr double g = kg / 1000.0;

    extern constexpr double lb = 0.45359237 * kg;

    // Distance
    extern constexpr double m = 1.0;
    extern constexpr double cm = m / 100.0;
    extern constexpr double mm = m / 1000.0;

    extern constexpr double inch = cm * 2.54;
    extern constexpr double foot = inch * 12.0;
    extern constexpr double thou = inch / 1000.0;

    // Volume
    extern constexpr double m3 = 1.0;
    extern constexpr double cc = cm * cm * cm;
    extern constexpr double mL = cc;
    extern constexpr double L = mL * 1000.0;

    // Pressure
    extern constexpr double Pa = 1.0;
    extern constexpr double kPa = Pa * 1000.0;
    extern constexpr double MPa = Pa * 1000000.0;

    extern constexpr double psi = lbf / (inch * inch);
    extern constexpr double inHg = Pa * 0.00029530;

    // Temperature
    extern constexpr double K = 1.0;
    extern constexpr double K0 = 273.15;
    extern constexpr double C = K;

    // Constants
    extern constexpr double atm = 101.325 * kPa;

    // Conversions
    inline double distance(double v, double unit) {
        return v * unit;
    }

    inline double rpm(double rpm) {
        return rpm * 0.104719755;
    }

    inline double toRpm(double rad_s) {
        return rad_s / 0.104719755;
    }

    inline double pressure(double v, double unit) {
        return v * unit;
    }

    inline double mass(double v, double unit) {
        return v * unit;
    }

    inline double volume(double v, double unit) {
        return v * unit;
    }

    inline double convert(double v, double unit0, double unit1) {
        return v * (unit0 / unit1);
    }

    inline double convert(double v, double unit) {
        return v / unit;
    }

    inline double celcius(double T_C) {
        return T_C * C + K0;
    }
};

#endif /* ATG_ENGINE_SIM_UNITS_H */
