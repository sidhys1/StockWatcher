    #ifndef SHARED_LIB_H
    #define SHARED_LIB_H

    #include <iostream>

    using namespace std;

    #ifdef __cplusplus
    extern "C" {
    #endif

    #ifdef BUILD_MY_DLL
    #define SHARED_LIB __declspec(dllexport)
    #else 
    #define SHARED_LIB __declspec(dllimport)
    #endif

    bool SHARED_LIB stockIsRaising(double lastPrice, double currentPrice);

    string SHARED_LIB stockRelativeGraphLocation(int last100prices [100], double currentPrice);

    double SHARED_LIB expectedFuturePrice(double lastPrice, double currentPrice, bool stockIsRaising, string stockRelativeGraphLocation);

    #ifdef __cplusplus
        }
    #endif

    #endif  