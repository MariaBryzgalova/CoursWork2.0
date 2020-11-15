#include "Basic.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Basic::Basic() {
    Name = new char[20];
    strcpy(Name, "Empty");
    Developer = new char[20];
    strcpy(Developer, "Empty");
    Data = new char[10];
    strcpy(Data, "Empty");
    Price = 14500;
    BLastV = new char[20];
    strcpy(BLastV, "Empty");
}
Basic::Basic(const Basic& soft) {
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    Price = soft.Price;
    BLastV = new char[strlen(soft.BLastV) + 1];
    strcpy(BLastV, soft.BLastV);
}
void Basic::PrintAllInformation() {
    cout << "Name: " << Name << endl;
    cout << "Developer: " << Developer << endl;
    cout << "Data: " << Data << endl;
    cout << "Price: " << Price << endl;
    cout << "Last version" << BLastV << endl;
}


Basic& Basic::operator=(const Basic& soft) {
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] BLastV;
    Name = new char[strlen(soft.Name) + 1];
    strcpy(Name, soft.Name);
    Developer = new char[strlen(soft.Developer) + 1];
    strcpy(Developer, soft.Developer);
    Data = new char[strlen(soft.Data) + 1];
    strcpy(Data, soft.Data);
    BLastV = new char[strlen(soft.BLastV) + 1];
    strcpy(BLastV, soft.BLastV);
    Price = soft.Price;
    return *this;
}
void Basic::WriteToFile(char* File) {
    ofstream file(File);
    file << Name << endl;
    file << Developer << endl;
    file << Data << endl;
    file << Price << endl;
    file << BLastV << endl;
    file.close();
}
void Basic::ReadFromFile(char* File) {
    ifstream file(File);
    delete[] Name;
    delete[] Developer;
    delete[] Data;
    delete[] BLastV;
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
    file.close();
}

char* Basic::GetBLastV() const {
    return BLastV;
}
void Basic::SetBLastV(char* bLastV) {
    delete[] BLastV;
    BLastV = new char[strlen(bLastV) + 1];
    strcpy(BLastV, bLastV);
}
Basic::~Basic() {
    delete[] BLastV;

}