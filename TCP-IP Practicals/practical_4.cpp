#include <iostream>
#include <string.h>
using namespace std;
void byteStuffing(string str)
{
    char *a = &str[0];
    int n = strlen(a), j = 1;
    char b[n + n], flag = 'f', escape = 'e';
    b[0] = 'f';
    for (int i = 0; i < n; i++)
    {
        if (a[i] == flag)
        {
            b[j] = escape;
            j++;
            b[j] = a[i];
        }
        else if (a[i] == escape)
        {
            b[j] = escape;
            j++;
            b[j] = a[i];
        }
        else
        {
            b[j] = a[i];
        }

        j++;
    }
    b[j] = 'f';
    cout << "\nAfter Byte Stuffing : ";
    for (int i = 0; i <= j; i++)
    {
        cout << b[i];
    }
}
void bitStuffing(string str)
{
    char *a = &str[0];
    int n = strlen(a),i=0, j = 0, count = 0;
    char b[n+16];
    for(j=0;j<8;j++){
        if(j==0 || j==7){
          b[j]='0';}
        else
          {b[j]='1';}
    }
    for ( i=0; i < n; i++)
    {
        b[j] = a[i];
        if (a[i] == '1')
        {
            count++;
             if(count==6)
              {b[j]='0';
               b[j+1]=a[i-1];
               i--;
              }
        }else{
        count=0;}
        j++;
    }
    j=j+7;
    int k=j-7;
    for(i=k;i<=j;i++){
        if(i==k || i==j)
          {b[i]='0';}
        else
         { b[i]='1';}
    }
        cout << "\nAfter Bit Stuffing : ";
    for (int i = 0; i <= j; i++)
    {
        cout << b[i];
    }
}
void charCount(){
    string str[10];
	int answer,i=0,no_of_words;
	do
	{
		cout << "Enter the Word : ";
        cin>>str[i];
		cout<<"\ndo you want to continue (yes:1|no:0) : ";
		cin>>answer;
		i++; 
	}while(answer!=0);
    no_of_words=i;
	cout<<"The transmitted data is:\n\t";
    for(i=0;i<no_of_words;i++){
        cout<<str[i].length()<<str[i];
    }
}
int main()
{
    system("CLS");
    string str;
    int a;
    cout << "Aim: Implement the following framing techniques n C/C++ environment.";
    cout << "\n1]. Byte/Character Stuffing technique\n2]. Bit Stuffing technique\n3]. Character count framing technique\n";
  b:cout<<"\nEnter The Framing Technique to be used : ";
    cin >> a;
    cin.ignore();
    switch (a)
    {
    case 1:
        cout << "Enter the Message : ";
        getline(cin, str);
        byteStuffing(str);
        break;

    case 2:
        cout << "Enter the bits : ";
        getline(cin, str);
        bitStuffing(str);
        break;

    case 3:
        charCount();
        break;
    default:
        cout << "please choose the valid option!! ";
        goto b;
    }
    return 0;
}
