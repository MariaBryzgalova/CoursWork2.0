#include "SoftwareTools.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

SoftwareTools::SoftwareTools() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 14500;
    SWLastV = new char[20];
    strcpy(SWLastV, "Empty");
}
SoftwareTools::SoftwareTools(const SoftwareTools& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    SWLastV = new char[strlen(soft.SWLastV) + 1];
    strcpy(SWLastV, soft.SWLastV);
}
void SoftwareTools::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
    cout << "Last version" << SWLastV << endl;
}


SoftwareTools& SoftwareTools::operator=(const SoftwareTools& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] SWLastV;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    SWLastV = new char[strlen(soft.SWLastV) + 1];
    strcpy(SWLastV, soft.SWLastV);
    Price = soft.Price;
    return *this;
}
void SoftwareTools::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file << SWLastV << endl;
    file.close();
}
void SoftwareTools::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] SWLastV;
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
    SWLastV = new char[strlen(tmp.c_str()) + 1];
    strcpy(SWLastV, tmp.c_str());
    getline(file, tmp);
    file.close();
}

char* SoftwareTools::GetSWLastV() const {
    return SWLastV;
}
void SoftwareTools::SetSWLastV(char* swLastV) {
    delete[] SWLastV;
    SWLastV = new char[strlen(swLastV) + 1];
    strcpy(SWLastV, swLastV);
}
SoftwareTools::~SoftwareTools() {
    delete[] SWLastV;

}