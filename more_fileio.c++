#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string data = "this is come from  code.";
    ofstream write_in_file("sample.txt");
    write_in_file << data;

    write_in_file.close();
    string info;
    ifstream read_in_file("sample.txt");
    getline(read_in_file, info);
    cout << info;
}