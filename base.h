//*This is base apis that is requierd in this progarm
//*author Keer M 2021.2

#include<opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include<iostream>
#include<array>
#include<opencv2/highgui.hpp>
#include<cstring>
#include<string>
#include<fstream>

#ifdef CARD_MODE
    #define MAX_CARD 9
    #define DPI 300
    #define PRINT_ROWS 2480
    #define PRINT_COLS 3508
    #define CARD_ROWS 697
    #define CARD_COLS 1016
    #define BRORDER_ROWS 97
    #define BROEDER_COLS 115
#endif
    
#ifdef BACK_MODE
    #define MAX_CARD 9
    #define DPI 300
    #define PRINT_ROWS 2480
    #define PRINT_COLS 3508
    #define CARD_ROWS 744
    #define CARD_COLS 1063
    #define BRORDER_ROWS 62
    #define BROEDER_COLS 79
#endif
    
using namespace std;
using namespace cv;

