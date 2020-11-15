#include "Backend.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Backend::Backend() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 14500;
    BLastV = new char[20];
    strcpy(BLastV, "Empty");
    BeType = new char[20];
    strcpy(BeType, "Empty");
}
Backend::Backend(const Backend& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    BLastV = new char[strlen(soft.BLastV) + 1];
    strcpy(BLastV, soft.BLastV);
    BeType = new char[strlen(soft.BeType) + 1];
    strcpy(BeType, soft.BeType);
}
void Backend::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
    cout << "Last version" << BLastV << endl;
    cout << "Type of program: " << BeType << endl;
}


Backend& Backend::operator=(const Backend& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] BLastV;
    delete[] BeType;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    BLastV = new char[strlen(soft.BLastV) + 1];
    strcpy(BLastV, soft.BLastV);
    BeType = new char[strlen(soft.BeType) + 1];
    strcpy(BeType, soft.BeType);
    Price = soft.Price;
    return *this;
}
void Backend::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file << BLastV << endl;
    file << BeType << endl;
    file.close();
}
void Backend::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] BLastV;
    delete[] BeType;
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
    BLastV = new char[strlen(tmp.c_str()) + 1];
    strcpy(BLastV, tmp.c_str());
    getline(file, tmp);
    BeType = new char[strlen(tmp.c_str()) + 1];
    strcpy(BeType, tmp.c_str());
    getline(file, tmp);
    file.close();
}

char* Backend::GetBeType() const {
    return BeType;
}
void Backend::SetBeType(char* beType) {
    delete[] BeType;
    BeType = new char[strlen(beType) + 1];
    strcpy(BeType, beType);
}
Backend::~Backend() {
    delete[] BeType;

}