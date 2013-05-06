#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Monty Hall Simulation" << endl << endl;
    int rando = 0;
    int car = 0;
    int goat = 0;
    int num = 10000;
    for(int i = 0; i < num; i++)
    {
        rando = rand()%3 + 1;
        if(rando == 1)
        {
            goat++;
        }
        else
        {
            car++;
        }
    }
    cout << "You have won " << car << " cars and " << goat << " goats." << endl;
    cout << "Switching has been successful " << car*100/num  << "% of the time." << endl;

    return 0;
}
