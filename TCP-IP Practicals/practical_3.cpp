#include <iostream>
#include <sstream>
#include <string.h>
#include <cmath>
using namespace std;
void validateAddr(char *n)
{
    int arr[4], count = 0, j, first[4], last[4], netmask[4];
    char *split, *id[2], subnet[34];
    string binarry[4];
    split = strtok(n, "/");
    while (split != NULL)
    {
        id[count] = split;
        split = strtok(NULL, "/");
        count++;
    }
    split=NULL;
    split = strtok(id[0], "."); // Initializing the array of characters to the pointer.
    count = 0;
    while (split != NULL)
    {
        stringstream g(split);
        int x;
        g >> x;
        arr[count] = x;
        split = strtok(NULL, ".");
        count++;
    }
    j = atoi(id[1]);
    cout << "No of Addresses : " << pow(2, 32 - j) << "\n";
    if (atoi(id[1]) > 17 && atoi(id[1]) < 26)
    {
        j = j + 1;
    }
    if (atoi(id[1]) > 26 && atoi(id[1]) < 35)
    {
        j = j + 2;
    }
    for (int i = 0; i < 35; i++)
    {
        if (i == 8 || i == 17 || i == 26)
        {
            subnet[i] = '.';
            continue;
        }
        if (i <= j)
        {
            subnet[i] = '1';
        }
        else
        {
            subnet[i] = '0';
        }
    }
    split=NULL;
    split = strtok(subnet, ".");
    count = 0;
    while (split != NULL)
    {
        netmask[count] = stoi(split, 0, 2);
        split = strtok(NULL, ".");
        count++;
    }
    cout << "Subnet Mask : " << netmask[0] << "." << netmask[1] << "." << netmask[2] << "." << netmask[3] << "\n";
    // Calculating First Address.
    for (int i = 0; i < 4; i++)
    {
        first[i] = arr[i] & netmask[i];
    } // Calculating Last Address.
    for (int i = 0; i <= 3; i++)
    {
        if (netmask[i] != 0 && netmask[i] < 255)
        {
            netmask[i] = 255 - netmask[i];
            last[i] = first[i] + netmask[i]+1;
            continue;
        }
        if (netmask[i] - netmask[i] == 0 && netmask[i] != 0)
        {
            last[i] = arr[i];
            continue;
        }
        if (last[i] - netmask[i] >= 0)
        {
            last[i] = 255;
            continue;
        }
    }
    cout << "First Address : " << first[0] << "." << first[1] << "." << first[2] << "." << first[3] << "\n";
    cout << "Last Address : " << last[0] << "." << last[1] << "." << last[2] << "." << last[3];
}
int main()
{
    system("CLS");
    char in[34];
    cout<<"Aim: Implementation of a program to extract the First Address, Last Address and to calculate the total number of addresses for a given block of addresses in IPv4 classless CIDR address format.\nName : Jatin Lakhorkar\tRoll No : 49\tBatch : C2\n";
    cout << "Enter The IP Address : ";
    cin.getline(in, 34);
    validateAddr(in);
    return 0;
}