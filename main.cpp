//
//  main.cpp
//  LAB3_A_randomnumber
//
//  Created by Thomas Smith on 4/6/17.
//  Copyright © 2017 ts22082. All rights reserved.
//

#include <iostream>
using namespace std;

//counters initiallized at zero. Will be used to count how many times a decimal between .1 and 1; and will be used as
double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

string LAB_A = "LABA", LAB_B = "LABB";

int clear(){

    num1=0; num2=0;
    num3=0; num4=0;
    num5=0; num6=0;
    num7=0; num8=0;
    num9=0; num10=0;
    
    return num1; return num2;
    return num3; return num4;
    return num5; return num6;
    return num7; return num8;
    return num9; return num10;
    
}

void displayResultsA(){
    
    cout << "This project creates an array of 10000 random numbers between .1 and 1, then displays the frequency of each. \n" << endl;
    
    cout << ".1 happend " << num1 << " times." << endl;
    cout << ".2 happend " << num2 << " times." << endl;
    cout << ".3 happend " << num3 << " times." << endl;
    cout << ".4 happend " << num4 << " times." << endl;
    cout << ".5 happend " << num5 << " times." << endl;
    cout << ".6 happend " << num6 << " times." << endl;
    cout << ".7 happend " << num7 << " times." << endl;
    cout << ".8 happend " << num8 << " times." << endl;
    cout << ".9 happend " << num9 << " times." << endl;
    cout << "1 happend " << num10 << " times. \n" << endl;
}

void displayResultsB(){
    
    cout << "This project creates an array of 10 random doubles then displays the frequency of the sum. \n" << endl;

    cout << "A double greater than 9 happened: " << num10 << " times." << endl;
    cout << "A double greater than 8 happened: " << num9 << " times." << endl;
    cout << "A double greater than 7 happened: " << num8 << " times." << endl;
    cout << "A double greater than 6 happened: " << num7 << " times." << endl;
    cout << "A double greater than 5 happened: " << num6 << " times." << endl;
    cout << "A double greater than 4 happened: " << num5 << " times." << endl;
    cout << "A double greater than 3 happened: " << num4 << " times." << endl;
    cout << "A double greater than 2 happened: " << num3 << " times." << endl;
    cout << "A double greater than 1 happened: " << num2 << " times." << endl;
    cout << "A double greater than 0 happened: " << num1 << " times. \n" << endl;
}

int labA(){
    
    clear();
    //an array that will eventually hold 10000 random doubles.
    double strOFNum[10000];
    
    for (int i = 0; i < 10000; i++){
        
        strOFNum[i] = (rand()%10+1) * .1;
    }
    
    for (int i = 0; i < 10000; i++){
        
        int toCheck = (strOFNum[i] * 10);
        
        switch (toCheck){
            case 1: num1++; break;
            case 2: num2++; break;
            case 3: num3++; break;
            case 4: num4++; break;
            case 5: num5++; break;
            case 6: num6++; break;
            case 7: num7++; break;
            case 8: num8++; break;
            case 9: num9++; break;
            case 10: num10++; break;
        }
    }
    
    displayResultsA();
    
    return num1; return num2;
    return num3; return num4;
    return num5; return num6;
    return num7; return num8;
    return num9; return num10;
}

int labB(){
    
    clear();
    
    int size = 10;
    double randomInt[size];
    
    for (int i = 0; i < 10000; i++){
        
        double total = 0;
        
        for (int j = 0; j < 10; j++){
    
            randomInt[j] = (rand()%10+1)*.1;
            total += randomInt[j];
        }
        
        if (total > 9){
            num9++;
        } else if (total > 8){
            num8++;
        } else if (total > 7){
            num7++;
        } else if (total > 6){
            num6++;
        } else if (total > 5){
            num5++;
        } else if (total > 4){
            num4++;
        } else if (total > 3){
            num3++;
        } else if (total > 2){
            num2++;
        } else if (total > 1){
            num1++;
        }
    }
    
    displayResultsB();
     
    return num1; return num2;
    return num3; return num4;
    return num5; return num6;
    return num7; return num8;
    return num9; return num10;
}

void assignment(string x, string y){

    if (x == "LABA"){
    
        labA();
        
    } else{
    
        cout << "inproper input" << endl;
    }
    
    if (y == "LABB"){
        
        labB();
        
    } else{
        
        cout << "inproper input" << endl;
    }
}

int main() {
    
    assignment(LAB_A, LAB_B);
 
    return 0;
}
