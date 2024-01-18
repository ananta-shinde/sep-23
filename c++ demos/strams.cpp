#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    char data[10];
    cout << "enter a number";
    cin >> number ;
    cout << "Welcome to c++" << endl;
    cout << "Entered number is : " << number;

    ofstream fout;
    fout.open("Data.txt",ios::app);
    fout << "Data flowing to file";
    fout.write("second line",5);
    fout.close();

    ifstream fin;
    fin.open("Data.txt",ios::in);
    // fin.read(data,10);
    fin.seekg(5);
    while(fin.read(data,5))
    {
        cout << data;
    }
    fin.close();
    return 0;
}

