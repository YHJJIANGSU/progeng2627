#include <iostream>

bool leap_year(int year){
    bool ly;
    if(year%400==0)
    {
        ly=true;
    }
    else if(year%100==0)
    {
        ly=false;
    }
    else if(year%4==0)
    {
        ly=true;
    }
    else
    {
        ly=false;
    }
    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
}
int month(int m1,int y1)
{
    if((m1==1)||(m1==3)||(m1==5)||(m1==7)||(m1==8)||(m1==10)||(m1==12))
    {
        return 31;
    }
    else if((m1==4)||(m1==6)||(m1==9)||(m1==11))
    {
        return 30;
    }
    else if(m1==2)
    {
        if(leap_year(y1))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 0; 
    }
 
}
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2,bool&ok){
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task
    // (this function should not print anything);
    ok=true;
    int month_max=month(m1,y1);
    if(d1<month_max)
    {
        d2=d1+1;
        m2=m1;
        y2=y1;
    }
    else if(d1==month_max&&m1<12)
    {
        d2=1;
        m2=m1+1;
        y2=y1;
    }
    else if(d1==month_max&&m1==12)
    {
        d2=1;
        m2=1;
        y2=y1+1;
    }
    else
    {
        ok=false;
        d2=0;
        m2=0;
        y2=0
    }
}
int main()
{
    bool ok;
    std::cout<<"Enter your day, month and year."<<std::endl;
    int d1,m1,y1,d2,m2,y2;
    std::cin>>d1>>m1>>y1;
    next_date(d1,m1,y1,d2, m2, y2,ok);
    if (ok)
    {
        std::cout<<"The following date is "<<d2<<" "<<m2<<" "<<y2<<std::endl;
    }
    else
    {
        std::cout<<"Error input."<<std::endl;
    }
    return 0;
    // TODO: write a main to test the function
}
