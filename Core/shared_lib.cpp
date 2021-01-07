#include <iostream>
#include <math.h>
#include "shared_lib.h"

bool SHARED_LIB stockIsRaising(double lastPrice, double currentPrice) 
{
    if(currentPrice > lastPrice) {
    return true;
    } else  {
    return false;
} }


std::string SHARED_LIB stockRelativeGraphLocation(int last100prices [100], double currentPrice) 
{   
  int min, max, x, i;

   min = last100prices[0];
    for(i = 0; i < 100; ++i){
        if(last100prices[i] < min){
            min = last100prices[i];
        }
    }   

   max = last100prices[0];
    for(x = 0; x < 100; ++x){
        if(last100prices[i] > max){
            max = last100prices[i];
        }
    }   

    if (currentPrice < min) 
        return "MIN";

     if (currentPrice > max) 
        return "MAX";
    
    return "Unable to calculate a relative graph location.";
}

double SHARED_LIB expectedFuturePrice(double lastPrice, double currentPrice, bool stockIsRaising, std::string stockRelativeGraphLocation) 
{ 
    int relativePriceGrowth = currentPrice - lastPrice; 
    int halfOfRelativePriceGrowth = 0.5 * relativePriceGrowth;

    if(relativePriceGrowth < 0) {
        if(stockIsRaising = true) {
            return -1;
        }
    }   
    
    if(relativePriceGrowth > 0) {
        if(stockIsRaising = false) {
            return -1;
        }
    } 

    if(stockIsRaising = true) {
        if(stockRelativeGraphLocation == "REL_MIN") {
        return currentPrice + relativePriceGrowth;
     } 
     else if(stockRelativeGraphLocation == "MIN") {
        return currentPrice + halfOfRelativePriceGrowth;
    }
  }

    if(stockIsRaising = false) {
        if(stockRelativeGraphLocation == "REL_MAX") {        
        return currentPrice - relativePriceGrowth;
        } 
        else if (stockRelativeGraphLocation == "MAX") {
            return currentPrice - halfOfRelativePriceGrowth;
        }
    }
}