#ifndef DOUBLYLIST_H_INCLUDED
#define DOUBLYLIST_H_INCLUDED
 
#include <iostream>
#include <string>
using namespace std;
 
struct kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};
typedef kendaraan infotype;
 
struct ElmList;
typedef ElmList* address;
 
struct ElmList {
    infotype info;
    address next;
    address prev;
};
 
struct List {
    address First;
    address Last;
};
 
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertLast(List &L, address P);

// Soal no 2
address findElm(List L, infotype x);

// Soal no 3
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);
 
#endif