//
// Created by skidr on 12/10/2019.
//

#include <iostream>
#include <chrono>

#include "classes/condomino.h"
#include "classes/condominio.h"

using namespace std;


int testReading()
{
    string filename = "condominio.txt";
    auto start = chrono::steady_clock::now();
    Condominio C(filename);
    auto end = chrono::steady_clock::now();
    cout << "The reading took: " << chrono::duration_cast<chrono::microseconds>(end-start).count() << " microseconds -> " << chrono::duration_cast<chrono::milliseconds>(end-start).count() << " milliseconds \n";

    start = chrono::steady_clock::now();
    C.writeToFiles("condominio.txt", "condominos.txt");
    end = chrono::steady_clock::now();
    cout << "The writing took: " << chrono::duration_cast<chrono::microseconds>(end-start).count() << " microseconds -> " << chrono::duration_cast<chrono::milliseconds>(end-start).count() << " milliseconds \n";
}

int main() {
    testReading();
    return 0;
}