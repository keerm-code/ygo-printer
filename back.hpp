#ifndef BACK_MODE
    #define BACK_MODE
#endif

#ifdef CARD_MODE
    #undef CARD_MODE
#endif

#include"base.h"

class Backpage
{
    private:
        Mat backpage;
    public:
        Backpage();
        ~Backpage();
        void print();
};
