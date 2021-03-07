//Aimee Kerr
//Visualizing Numbers
//6/14/2020
#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        int i,given,wait,check=0,colors=0,j=0;
        cout << "\e[39mEnter a Number or type 0 to exit!\n";
        cin >> given;
        cout << "Would you like it to go slow? (1 for yes, anything else for no!)\n";
        cin >> wait;
        if(given < 0)
            cout << "It's hard to visualize negative numbers :( Try a positive number!\n";
        else if(given == 0)
            return 0;
        else
        {
            for(i=0;i<given;i++)
            {
                if(colors == 0)
                {
                    if(check == 258)
                    {
                        colors++;
                        check = 0;
                    }
                    else
                    {
                        if(i%2 == 0)
                            cout << "\e[31mo ";
                        else
                            cout << "\e[31mO ";
                        if(wait == 1)
                        {
                            while(j != 1000000)
                                j++;
                            j = 0;
                        }
                        check++;
                    }
                }
                if(colors == 1)
                {
                    if(check == 258)
                    {
                        colors++;
                        check = 0;
                    }
                    else
                    {
                        if(i%2 == 0)
                            cout << "\e[33mo ";
                        else
                            cout << "\e[33mO ";
                        if(wait == 1)
                        {
                            while(j != 1000000)
                                j++;
                            j = 0;
                        }
                        check++;
                    }
                }
                if(colors == 2)
                {
                    if(check == 258)
                    {
                        colors++;
                        check = 0;
                    }
                    else
                    {
                        if(i%2 == 0)
                            cout << "\e[32mo ";
                        else
                            cout << "\e[32mO ";
                        if(wait == 1)
                        {
                            while(j != 1000000)
                                j++;
                            j = 0;
                        }
                        check++;
                    }
                }
                if(colors == 3)
                {
                    if(check == 258)
                    {
                        colors++;
                        check = 0;
                    }
                    else
                    {
                        if(i%2 == 0)
                            cout << "\e[34mo ";
                        else
                            cout << "\e[34mO ";
                        if(wait == 1)
                        {
                            while(j != 1000000)
                                j++;
                            j = 0;
                        }
                        check++;
                    }
                }
                if(colors == 4)
                {
                    if(check == 258)
                    {
                        colors++;
                        check = 0;
                    }
                    else
                    {
                        if(i%2 == 0)
                            cout << "\e[36mo ";
                        else
                            cout << "\e[36mO ";
                        if(wait == 1)
                        {
                            while(j != 1000000)
                                j++;
                            j = 0;
                        }
                        check++;
                    }
                }
                if(colors == 5)
                {
                    if(check == 258)
                    {
                        colors++;
                        check = 0;
                    }
                    else
                    {
                        if(i%2 == 0)
                            cout << "\e[35mo ";
                        else
                            cout << "\e[35mO ";
                        if(wait == 1)
                        {
                            while(j != 1000000)
                                j++;
                            j = 0;
                        }
                        check++;
                    }
                }
                if(colors > 5)
                    colors = 0;
            }
            cout << "\n";
        }
    }
}
