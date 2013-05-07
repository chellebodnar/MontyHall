#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    while(true)
    {
        cout << "Monty Hall Variant Simulation" << endl << endl;
        cout << "Select a type of simulation:" << endl;
        cout << "h - Monty Hall Problem" << endl;
        cout << "b - Banana Peel Variation" << endl;
        //cout << "d - Door Preference Variation" << endl;
        cout << "q - quit" << endl;

        char type = 'h';
        cin >> type;

        if(type != 'h' && type != 'b' && type != 'q')
        {
            cout << "If you can't type, you're probably not ready for this simulation." << endl;
            exit(1);
        }
        if(type == 'q')
        {
            cout << "Thanks for playing!" << endl;
            break;
        }
        int rando = 0;
        int randHost = 0;
        int car = 0;
        int goat = 0;
        int i = 0;
        int num = 10000;

        while(i < num)
        {
            rando = rand()%3 + 1;
            randHost = rand()%2 + 2;
            if(type == 'b')
            {
                if(rando == randHost)
                {
                    continue;
                }
            }

            if(rando == 1)
            {
                goat++;
            }
            else
            {
                car++;
            }
            i++;
        }

        cout << "You have won " << car << " cars and " << goat << " goats." << endl;
        cout << "Switching has been successful " << car*100/num  << "% of the time." << endl << endl << endl;

    }

    return 0;
}
