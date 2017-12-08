//Program reads in data and displays a bar graph showing productivity for each plant.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int NUMBER_OF_PLANTS = 4;

void inputData(int a[], int lastPlantNUmber);
//Precondition: lastPlantNumber is the declared size of array a.
//Postcondition: For plantNumber = 1 through lastPlantNumber:
//a[plantNumber - 1] and will equal to the total production units for plant
//number plantNumber


void scale(int a[], int lastPlantNumber);
//Precondition: a[0] through a[lastPlantNumber - 1] each have a non-negative
//values.
//Postconditiion: a[i] has been changed to the number of 1000s (rounded to an
//integer) that were originally in a[i], for all i such that 0 <= i <
//lastPlantNumber

void graph(const int a[], int lastPlantNumber);
//Precondition: a[0] through a[lastPlantNumber - 1] have non-negative values.
//Postcondition: A vertical bar graph has been displayed saying that plant
//number N has produced a[N - 1] 1000s of units, for each N such that 
//1 <= N <= lastPlantNumber.

void getTotal(int& totalUnits);
//Precondition: totalUnits >= 0.
//Reads nonnegative integers from the keyboard and places their total in 
//totalUnits.

int roundNumber(double number);
//Precondition: number >= 0.
//Returns number rounded to the nearest integer.

int findMaxUnits(const int a[], int lastPlantNumber);
//Precondition: a[0] through a[lastPlantNumber - 1] have non-negative numbers.
//Postcondition: Returns tht maximum total units out of all plant 1 through 
//plant lastNumberPlant plants.

int main()
{
    int plant[NUMBER_OF_PLANTS];

    cout<<"This program displays a graph showing\n"
        <<"production for each plant in the company.\n";

    inputData(plant, NUMBER_OF_PLANTS);
    scale(plant, NUMBER_OF_PLANTS);
    graph(plant, NUMBER_OF_PLANTS);

    return 0;
}

void inputData(int a[], int lastPlantNumber)
{
    for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
    {
        cout<<"\nEnter production data for plant number "<<plantNumber<<"\n";
        getTotal(a[plantNumber - 1]);
    }
}

void getTotal(int& totalUnits)
{
    cout<<"Enter number of units produced by each department.\n";

    int units;

    do
    {
        cin>>units;
        totalUnits += units;
    }while(cin.peek() != '\n');

    cout<<"Total = "<<totalUnits<<endl;
}

void scale (int a[], int lastPlantNumber)
{
    for (int i = 0; i < lastPlantNumber; i++)
        a[i] = roundNumber(a[i]/1000.0);
}

int roundNumber(double number)
{
    return static_cast<int>(floor(number + 0.5));
}

void graph(const int a[], int lastPlantNumber)
{
    int maxUnits = findMaxUnits(a, lastPlantNumber);

    cout<<"\nUnits produced in thousands of units:\n\n";
    for (int i = maxUnits; i >= 1; i--)
    {
        for (int j = 0; j < lastPlantNumber; j++)
        {
            cout<<setw(15);
            if (a[j] >= i)
                cout<<'*';
            else
                cout<<' ';
        }
        cout<<endl;
    }

    cout<<setw(22)<<"Plant #1";
    for (int i = 1; i < lastPlantNumber; i++)
        cout<<setw(14)<<"Plant #"<<i + 1;
    cout<<endl;
}

int findMaxUnits(const int a[], int lastPlantNumber)
{
    int max = 0;
    for (int plantNumber = 0; plantNumber < lastPlantNumber; plantNumber++)
    {
        if (a[plantNumber] > max)
            max = a[plantNumber];
    }

    return max;
}
