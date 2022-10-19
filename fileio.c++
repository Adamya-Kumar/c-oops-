#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // string st = "harry bhai";
    // ofstream write_in_file("sample.txt");//wirting opration
    // write_in_file << st;
    string data;
    ifstream read_in_file("sample_read_only.txt");
    // read_in_file >> data;
    getline(read_in_file, data);
    cout << data << endl;
    getline(read_in_file, data);
    cout << data << endl;
    getline(read_in_file, data);
    cout << data << endl;
    getline(read_in_file, data);
    cout << data << endl;
    getline(read_in_file, data);
    cout << data << endl;
}