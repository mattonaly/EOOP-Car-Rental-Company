#ifndef UTILITY_HPP
#define UTILITY_HPP

using namespace std;

#include <bits/stdc++.h>


enum MANUFACTURER{
    AUDI,
    BMW,
    SKODA,
    TOYOTA,
    FORD,
    HONDA,
    VOLKSWAGEN,

};

enum STATUS{
    UNACTIVE,
    ACTIVE,    
};

enum DATA_TYPE{
    ALL,
    CAR,
    CUSTOMER,
    EMPLOYEE,
    RENTAL_HISTORY,    
};

enum OUT_CUSTOMER{
    ALL,
    USER_RENTAL_HISTORY,
};

typedef struct{
    double longitude;
    double latitude;
} Localization;

#endif