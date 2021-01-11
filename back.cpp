#include"back.hpp"

void Backpage::print()
{
    Mat a4=Mat(PRINT_ROWS,PRINT_COLS,CV_8UC1,Scalar(255));
    
    struct Loc
    {
        // Data members
        int x=0;
        int y=0;
    }loc// types, *types
    ;
    Rect roi;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            roi=Rect(BRORDER_ROWS*(loc.x+1),(loc.y+1)*BROEDER_COLS,CARD_ROWS,CARD_COLS);
            backpage.copyTo(a4(roi));
            loc.x=i;
            loc.y=j;
        }
    }
    backpage=a4.clone();
    vector<int> savepaarms;
    savepaarms.push_back(CV_IMWRITE_JPEG_QUALITY);
    savepaarms.push_back(100);
    imwrite("result.jpg",backpage,savepaarms);
}

Backpage::Backpage()
{
    backpage=imread("back.jpg",4);
    if(backpage.empty())
    {
        imshow("error",imread("photoempty.jpg"));
        waitKey();
        exit(-1);
    }
    else
    {
        resize(backpage,backpage,Size2i(CARD_ROWS,CARD_COLS));
    }
}

Backpage::~Backpage()
{
    backpage=Mat(PRINT_ROWS,PRINT_COLS,CV_8UC1,Scalar(255));
}