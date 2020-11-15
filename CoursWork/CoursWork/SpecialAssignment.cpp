#include "SpecialAssignment.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

SpecialAssignment::SpecialAssignment() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 14500;
    AppArea = new char[20];
    strcpy(AppArea, "Empty");
    AppType = new char[20];
    strcpy(AppType, "Empty");
    SALastV = new char[20];
    strcpy(SALastV, "Empty");
    Licence = new char[20];
    strcpy(Licence, "Empty");
}
SpecialAssignment::SpecialAssignment(const SpecialAssignment& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    AppArea = new char[strlen(soft.AppArea) + 1];
    strcpy(AppArea, soft.AppArea);
    AppType = new char[strlen(soft.AppType) + 1];
    strcpy(AppType, soft.AppType);
    SALastV = new char[strlen(soft.SALastV) + 1];
    strcpy(SALastV, soft.SALastV);
    Licence = new char[strlen(soft.Licence) + 1];
    strcpy(Licence, soft.Licence);
}
void SpecialAssignment::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
    cout << "Scope of application" << AppArea << endl;
    cout << "Type of installation" << AppType << endl;
    cout << "Last version: " << SALastV << endl;
    cout << "Licence: " << Licence << endl;
}


SpecialAssignment& SpecialAssignment::operator=(const SpecialAssignment& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] AppArea;
    delete[] AppType;
    delete[] SALastV;
    delete[] Licence;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    AppArea = new char[strlen(soft.AppArea) + 1];
    strcpy(AppArea, soft.AppArea);
    AppType = new char[strlen(soft.AppType) + 1];
    strcpy(AppType, soft.AppType);
    SALastV = new char[strlen(soft.SALastV) + 1];
    strcpy(SALastV, soft.SALastV);
    Licence = new char[strlen(soft.Licence) + 1];
    strcpy(Licence, soft.Licence);
    Price = soft.Price;
    return *this;
}
void SpecialAssignment::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file << AppArea << endl;
    file << AppType << endl;
    file << SALastV << endl;
    file << Licence << endl;
    file.close();
}
void SpecialAssignment::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] AppArea;
    delete[] AppType;
    delete[] SALastV;
    delete[] Licence;
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
    AppArea = new char[strlen(tmp.c_str()) + 1];
    strcpy(AppArea, tmp.c_str());
    getline(file, tmp);
    AppType = new char[strlen(tmp.c_str()) + 1];
    strcpy(AppType, tmp.c_str());
    getline(file, tmp);
    SALastV = new char[strlen(tmp.c_str()) + 1];
    strcpy(SALastV, tmp.c_str());
    getline(file, tmp);
    Licence = new char[strlen(tmp.c_str()) + 1];
    strcpy(Licence, tmp.c_str());
    getline(file, tmp);
    file.close();
}

char* SpecialAssignment::GetSALastV() const {
    return SALastV;
}
void SpecialAssignment::SetSALastV(char* saLastV) {
    delete[] SALastV;
    SALastV = new char[strlen(saLastV) + 1];
    strcpy(SALastV, saLastV);
}

char* SpecialAssignment::GetLicence() const {
    return Licence;
}
void SpecialAssignment::SetLicence(char* licence) {
    delete[] Licence;
    Licence = new char[strlen(licence) + 1];
    strcpy(Licence, licence);
}
SpecialAssignment::~SpecialAssignment() {
    delete[] Licence;
    delete[] SALastV;

}