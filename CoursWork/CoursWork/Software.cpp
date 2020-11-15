#include "Software.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Software::Software() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 5000;
}
Software::Software(const Software& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
}
void Software::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
 }
double Software::GetPrice() const {
    return Price;
}
void Software::SetPrice(double price) {
    Price = price;
}
char* Software::GetName() const {
    return Name;
}
void Software::SetName(char* name) {
    delete[] Name;
    Name = new char[strlen(name) + 1];
    strcpy(Name, name);
}

char* Software::GetDeveloper() const {
    return Developer;
}
void Software::SetDeveloper(char* developer) {
    delete[] Developer;
    Developer = new char[strlen(developer) + 1];
    strcpy(Developer, developer);
}
char* Software::GetData() const {
    return Data;
}
void Software::SetData(char* data) {
    delete[] Data;
    Data = new char[strlen(data) + 1];
    strcpy(Data, data);
}

Software& Software::operator=(const Software& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    return *this;
}
void Software::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file.close();
}
void Software::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    string tmp;
    getline(file, tmp);
    Name = new char[strlen(tmp.c_str()) + 1];
    strcpy(Name, tmp.c_str());
    getline(file, tmp);
    Developer = new char[strlen(tmp.c_str()) + 1];
    strcpy(Developer, tmp.c_str());
    getline(file, tmp);
    Data = new char[strlen(tmp.c_str()) + 1];
    strcpy(Data, tmp.c_str());
    getline(file, tmp);
    file.close();
}
Software::~Software() {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    
}
