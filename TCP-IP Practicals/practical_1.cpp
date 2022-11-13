#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
static int ninr = 0;
int valid_addr(char *s) // Validating IP Address.
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (isdigit(s[i]) == false) // Cecking whether the IP contains anythig else than digit.
        {
            cout << "IP Should only contain numbers.(No characters or whitespaces)." << endl;
            ninr++;
            goto a;
        }
    }
a:
    string str(s);
    if (str.find('0') == 0) // Checking For the Leading zeroes.
    {
        cout << "IP should not contain leading zeros." << endl;
        ninr++;
    }
    return true;
}
int is_valid_ip(char *in) // Checking whether the IP Entered is Correct or Not.
{
    int count = 0, arr[3], inr = 0, cnt = 0;
    static int c = 0;
    for (int i = 0; i < strlen(in); i++) // Counting the dots"."checking for other symbol.
    {
        if (in[i] == '.')
            count++;
        else if ((isalnum(in[i]) || isspace(in[i])) == false && in[i] != '.')
            cnt++;
    }
    if (cnt > 0) // If the "." dots are not there as delemeter then returning false.
    {
        cout << " It should only seperated by ('.')" << endl;
        return false;
    }
    char *ptr;
    ptr = strtok(in, "."); // Initializing the array of characters to the pointer.
    while (ptr != NULL)
    {
        valid_addr(ptr);
        stringstream g(ptr);
        int x;
        g >> x;
        arr[c] = x;
        ptr = strtok(NULL, ".");
        c++;
    }
    if (c != 4 || count != 3) // Checking no. of cells of an IP.
    {
        cout << "IP should exactly contain 4 cells." << endl;
        return false;
    }
    for (int i = 0; i < c; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 255)
            ;
        else
        {
            cout << "Enter The IP in range 0-255." << endl;
            return false;
        }
    }
    if (ninr != 0)
    {
        return false;
    }
    cout << "IPv4 Address is of Class ";
    if (arr[0] >= 0 && arr[0] <= 127)
    {
        cout << "A. \nNetwork ID : " << arr[0] << "\nHost ID :" << arr[1] << "." << arr[2] << "." << arr[3] << "\n";
    }
    if (arr[0] >= 128 && arr[0] <= 191)
    {
        cout << "B. \nNetwork ID : " << arr[0] << "." << arr[1] << "\nHost ID :" << arr[2] << "." << arr[3] << "\n";
    }
    if (arr[0] >= 192 && arr[0] <= 223)
    {
        cout << "C. \nNetwork ID : " << arr[0] << "." << arr[1] << "." << arr[2] << "\nHost ID : " << arr[3] << "\n";
    }
    if (arr[0] >= 224 && arr[0] <= 239)
    {
        cout << "D.\n";
    }
    if (arr[0] >= 240 && arr[0] <= 255)
    {
        cout << "E.\n";
    }
    return true; // IP is Valid and returning true.
}
int main()
{
    system("CLS");
    char in[100];
    cout << "Enter The IP Address : ";
    cin.getline(in, 100);
    is_valid_ip(in) ? cout << "Entered IP is Valid." << endl : cout << "Entered IP is Invalid!!" << endl; // Function Initialized to Check it is valid or not.
    return 0;
}