#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    int a, b, c, number;
    infile.open("input_1.txt");
    infile >> number;
    ofstream offile;
    offile.open("output_1.txt");
    for (int i = 0; i < number; i++) {
        infile >> a >> b >> c;
        offile << "#" << i + 1 << " ";
        offile << a + b + c << endl;
    }
    infile.close();
    offile.close();
    return 0;
}