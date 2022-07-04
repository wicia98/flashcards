#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef struct{
    int ID;
    string Lang1;
    string Lang2;
    int points;
}Record;

int main()
{
    int x;
    cout<<"Podaj liczbe wyrazow do nauki"<<endl;
    cin>>x;
    if(x != 0)
        Record record[x];
    FILE* sheet;
    sheet = fopen("C:\\Users\\mwit\\Documents\\projects\\flashcards\\data\\Test.csv", "r"); 

    string line;
    while(getline(sheet, line))
    {
        
    }

    sheet.close();
    return 0;
}