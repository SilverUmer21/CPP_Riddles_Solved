#include<iostream>
using namespace std;

int main()
{   
    int daysInMonths[12]={ 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };

    int month=0,days=0;
    cout<<"Enter month : "<<endl;
    cin>>month;
    cout<<"Enter days  : "<<endl;
    cin>>days;

    int totalDays=0;
    for(int i=0;i<month-1;i++)
    {
        totalDays+=daysInMonths[i];
    }
    totalDays+=days;
    cout<<"Total Days till "<<days<<"/"<<month<<" are "<<totalDays<<endl;
    return 0;
    
}