#include<iostream>

char sample[100];
using namespace std;
void count();

void count()
{
    int i,vowNo,consNo;
    for(i=0;sample[i];i++)
    {
    if(sample[i] == 'a'|| sample[i] == 'e'|| sample[i] == 'i'|| sample[i] == 'o'|| sample[i] == 'u'
    ||sample[i] == 'A'|| sample[i] == 'E'|| sample[i] == 'I'|| sample[i] == 'O'|| sample[i] == 'U' )
        {
        vowNo++;//vowel counter incremented by 1
        }
    else if((sample[i] >= 'a' && sample[i] <= 'z' || sample[i] >= 'A' && sample[i] <= 'Z' ))
        {
        consNo++;//consonant counter incremented by 1
        }
    }
   cout<<"Your string is : "<<sample<<endl;
   cout<<"Number of vowels:"<<vowNo<<endl;
   cout<<"Number of consonants:"<<consNo<<endl;
}
int main()
{
    cout << "Enter the string to be counted "<< endl;
    gets(sample);
    count();
    return 0;
}