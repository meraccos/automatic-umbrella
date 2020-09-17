#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile;
    ofstream outfile;
    infile.open("input_2.txt");
    outfile.open("output_2.txt");
    int a, b, number;
    int remainder, quotient;
    infile >> number;
    for (int i=0; i < number; i++) {
        infile >> a >> b;
        remainder = a % b;
        quotient = a / b;
        outfile << "#" << i + 1 << " ";
        outfile << remainder << " " << quotient << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}