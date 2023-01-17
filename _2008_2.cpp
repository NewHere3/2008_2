#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

void read();
void write();

int main()
{
    read();
    write();
    return 0;
}

void read()
{
    ifstream duom("Duomenys.txt");
}

void write()
{
    ofstream rez("Rezultatai.txt");
}