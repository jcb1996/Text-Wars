//
//  main.cpp
//  Text Wars
//
//  Created by John-Craig Borman on 4/22/12.
//  Copyright (c) 2012 Oratory Preparatory School. All rights reserved.
//
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <stdlib.h>


using namespace std;

void introDisplay();   //intro display
void chooseItems();    //choose items interface
void chooseBattleItem(); //choose item for battle
void battleIntro1();   //battle intro and briefing
void battleIntro2();
void printStats1();    //print stats of item1 function
void printStats2();    //print stats of item2 function
void printStats3();    //print stats of item3 function
void battle();         //battle interface
void attack();         //attack interface
void end();            //end phase
void battle2();        //battle 2
void battle3();
void swtch();
void enemy1Attk();
void enemy2Attk();
void enemy3Attk();

void enemy1Attk2();
void enemy2Attk2();
void enemy3Attk2();

void healthStats();



int statSwd1[3] = {60,20,100};
int statSwd2[3] = {50,50,120};
int statSwd3[3] = {20,60,110};
int statStf1[3] = {80,10,100};
int statStf2[3] = {50,50,110};
int statStf3[3] = {40,70,120};
int statSld1[3] = {60,100,130};
int statSld2[3] = {70,90,140};
int statSld3[3] = {40,120,130};

int x; //integer for move choice
int enemyHP = 200;
int userHP = 200;
int enemyDefense = 150;
int userDefense = 100;
int b; //integer assigned to random number for enemies attack
int c;
int d;
int e; //attack loop integer
int f; //integer for probability of super effective attack

int StoreA; //pre-attack power storage

int decision; //attack decision


bool life = true;

string sword1 ("sword_fire");
string sword2 ("sword_water");
string sword3 ("sword_earth");
string staff1 ("staff_fire");
string staff2 ("staff_water");
string staff3 ("staff_earth");
string shield1 ("shield_fire");
string shield2 ("shield_water");
string shield3 ("shield_earth");

string item1; //first item
string item2; //second item
string item3; //third item
string newItem;

string object1;
string object2;
string object3;

int main (int argc, const char * argv[])
{
    system("cls");
    introDisplay();

    chooseItems();

    battleIntro1();

    battleIntro2();

    /* enemy en;
     en.enemyIntro();*/

    battle();

    end();
    if(userHP > 0){
    battle2();

    end();

        if(userHP > 0){
        battle3();

            end();}}

    cout << "Thanks for playing Text Wars" << endl;

    return 0;
}

//intro display
void introDisplay(){

    cout << "Hello and welcome to Text Wars." << endl;
    cout << "  The text-based battle game  " << endl;
    cout << endl;
    cout << endl;
    cout << "       Please hit enter        " << endl;
    cin.ignore();   //ignores user input, and waits to run functions until after entered
    system("cls");  //clears current console
}

//choose items interface
void chooseItems(){

    cout << "Please select a sword, staff or shield" << endl;
    cout << "As well as the type of the item: fire, water, or earth." << endl;
    cout << endl;
    cout << "Enter the item and type of the item." << endl;
    cout << endl;
    cout << "Example: 'sword_fire' or 'shield_earth'" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Make sure each item is spelled correctly" << endl;
    cout << endl;
    cout << endl;

    cin >> item1;
    (x = 1);
    /*cin >> item2;
    (x = 2);
    cin >> item3;
    (x = 3);*/

}

void battleIntro1(){

    cout << "          ~~~Item Stats~~~            " << endl;
    cout << "Power         Defense       Durability" << endl;

    cout << item1 << endl;
    printStats1();
    /*cout << item2 << endl;
    printStats2();
    cout << item3 << endl;
    printStats3();*/

}

void printStats1(){
    if(item1 == sword1){
        cout << statSwd1[0] << "              " << statSwd1[1] << "              " << statSwd1[2] << endl;
    }
    if(item1 == sword2){
        cout << statSwd2[0] << "              " << statSwd2[1] << "              " << statSwd2[2] << endl;
    }
    if(item1 == sword3){
        cout << statSwd3[0] << "              " << statSwd3[1] << "              " << statSwd3[2] << endl;
    }
    if(item1 == staff1){
        cout << statStf1[0] << "              " << statStf1[1] << "              " << statStf1[2] << endl;
    }
    if(item1 == staff2){
        cout << statStf2[0] << "              " << statStf2[1] << "              " << statStf2[2] << endl;
    }
    if(item1 == staff3){
        cout << statStf3[0] << "              " << statStf3[1] << "             " << statStf3[2] << endl;
    }
    if(item1 == shield1){
        cout << statSld1[0] << "              " << statSld1[1] << "              " << statSld1[2] << endl;
    }
    if(item1 == shield2){
        cout << statSld2[0] << "              " << statSld2[1] << "              " << statSld2[2] << endl;;
    }
    if(item1 == shield3){
        cout << statSld3[0] << "              " << statSld3[1] << "              " << statSld3[2] << endl;
    }
    ;}

void printStats2(){
    if(item2 == sword1){
        cout << statSwd1[0] << "              " << statSwd1[1] << "              " << statSwd1[2] << endl;
    }
    if(item2 == sword2){
        cout << statSwd2[0] << "              " << statSwd2[1] << "              " << statSwd2[2] << endl;
    }
    if(item2 == sword3){
        cout << statSwd3[0] << "              " << statSwd3[1] << "              " << statSwd3[2] << endl;
    }
    if(item2 == staff1){
        cout << statStf1[0] << "              " << statStf1[1] << "              " << statStf1[2] << endl;
    }
    if(item2 == staff2){
        cout << statStf2[0] << "              " << statStf2[1] << "              " << statStf2[2] << endl;
    }
    if(item2 == staff3){
        cout << statStf3[0] << "              " << statStf3[1] << "              " << statStf3[2] << endl;
    }
    if(item2 == shield1){
        cout << statSld1[0] << "              " << statSld1[1] << "              " << statSld1[2] << endl;
    }
    if(item2 == shield2){
        cout << statSld2[0] << "              " << statSld2[1] << "              " << statSld2[2] << endl;;
    }
    if(item2 == shield3){
        cout << statSld3[0] << "              " << statSld3[1] << "              " << statSld3[2] << endl;
    }
    ;}

void printStats3(){

    if(item3 == sword1){
        cout << statSwd1[0] << "              " << statSwd1[1] << "              " << statSwd1[2] << endl;
    }
    if(item3 == sword2){
        cout << statSwd2[0] << "              " << statSwd2[1] << "              " << statSwd2[2] << endl;
    }
    if(item3 == sword3){
        cout << statSwd3[0] << "              " << statSwd3[1] << "              " << statSwd3[2] << endl;
    }
    if(item3 == staff1){
        cout << statStf1[0] << "              " << statStf1[1] << "              " << statStf1[2] << endl;
    }
    if(item3 == staff2){
        cout << statStf2[0] << "              " << statStf2[1] << "              " << statStf2[2] << endl;
    }
    if(item3 == staff3){
        cout << statStf3[0] << "              " << statStf3[1] << "              " << statStf3[2] << endl;
    }
    if(item3 == shield1){
        cout << statSld1[0] << "              " << statSld1[1] << "              " << statSld1[2] << endl;
    }
    if(item3 == shield2){
        cout << statSld2[0] << "              " << statSld2[1] << "              " << statSld2[2] << endl;;
    }
    if(item3 == shield3){
        cout << statSld3[0] << "              " << statSld3[1] << "              " << statSld3[2] << endl;
    }
}



/*void chooseBattleItem(){

    cout << "Select Which Item to use" << endl;
    cout << "Item: 1, 2, or 3" << endl;
    cin >> x;

    switch(x){
        case 1:

            cout << item1;
            break;
        case 2:

            cout << item2;
            break;
        case 3:
            cout << item3;
            break;

        default:
            cout << "enter valid input" << endl;
            break;
    } userHP



    void determine(){
     if(item1 == sword1){
     item1 = statSwd1[3] = {60, 20, 100};
     }
     if(item1 == sword2){
     item1[3] = {50,50,120};
     }
     if(item1 == sword3){
     item1[3] = {20,60,110};
     }
     if(item1 == staff1){
     item1[3] = {120,10,100};
     }
     if(item1 == staff2){
     item1[3] = {50,50,110};
     }
     if(item1 == staff3){
     item1[3] = {40,70,120};
     }
     if(item1 == shield1){
     item1[3] = {60,100,130};
     }
     if(item1 == shield2){
     item1[3]={70,90,140};
     }
     if(item1 == shield3){
     item1[3] = {40,120,130};
     }
     }
}*/
void battleIntro2(){
      /*  cout << "Hit enter to continue" << endl;
        cout << endl;
        cout << endl;
        cin.ignore();*/

    }
void battle(){
        cout << endl;
        cout << "Your health is currently: " << userHP << endl;
        cout << "The enemies health is currently: " << enemyHP << endl;

        cout << endl;
        cout << "Now select your action:" << endl;
        cout << "    1 - attack" << endl;
        cout << "    2 - block" << endl;
        cout << "    3 - change" << endl;

    do {



            cin >> x;
            switch (x) {
                case 1:


                    attack();



                    cout << endl;
                    cout << endl;

                    enemy1Attk();

                    if(userHP <= 0){
                        cout << "Your health is 0" << endl;
                    }
                    if(enemyHP <= 0){
                        cout << "The enemies health is 0" << endl;
                    }
                    if(userHP > 0){
                    cout << "Your health is currently: " << userHP << endl;
                    }
                    if (enemyHP > 0) {
                    cout << "Your enemies health is currently: " << enemyHP << endl;
                    }
                    cout << endl;
                    cin.ignore();

                    break;
                case 2:
                    cout << "User blocked enemies attack." << endl;
                    cout << "Your health is currently: " << userHP << endl;
                    cout << "The enemies health is currently: " << enemyHP << endl;
                    cin.ignore();

                    break;

               case 3:
                swtch();
                cin >> newItem;
                item1 = newItem;

                cout << "Your new weapon is " << item1 << endl;
                cout << endl;
                enemy1Attk2();
                cout << endl;
                healthStats();
                cout << endl;
                break;


                default:
                    cout << "CRITICAL ERROR # 84" << endl;
                    cout << "Invalid input" << endl;
                    break;
            }
             if(enemyHP <= 0){
                    break;
                    }
        } while (life == true);
    if (enemyHP <= 0) {
        cout << endl;
        cout << "Your enemies health is now: 0" << endl;
    }
    cout << endl;
    }

void end(){
        if(userHP <= 0){
            life = false;
            cout << "You have lost!" << endl;

        }
        if(enemyHP <= 0){
            life = false;
            cout << "Kudos, you have won!" << endl;
            cout << endl;
            cout << "Hit enter to continue" << endl;
            cin.ignore();
        }
    }


void battle2(){
    cout << endl;
    enemyHP = 220;
    userHP = 200;
    life = true;
    cout << endl;
    cin.ignore();
    system("cls");
    cout << "      ~~~ Round 2 ~~~     " << endl;
    cout << "Your health is currently: " << userHP << endl;
    cout << "The enemies health is currently: " << enemyHP << endl;

    cout << endl;
    cout << "Now select your action:" << endl;
    cout << "    1 - attack" << endl;
    cout << "    2 - block" << endl;
    cout << "    3 - change" << endl;

    do {

        cin >> x;
        switch (x) {
            case 1:

                    attack();


                cout << endl;
                cout << endl;

                enemy2Attk();

                healthStats();

                break;
            case 2:
                cout << "User blocked enemies attack." << endl;
                cout << "Your health is currently: " << userHP << endl;
                cout << "The enemies health is currently: " << enemyHP << endl;
                cin.ignore();

                break;

             case 3:
                swtch();
                cin >> newItem;
                item1 = newItem;

                cout << "Your new weapon is " << item1 << endl;
                cout << endl;
                enemy1Attk2();
                cout << endl;
                healthStats();
                cout << endl;
                break;


            default:
                cout << "CRITICAL ERROR # 84" << endl;
                cout << "Invalid input" << endl;
                break;
        }
         if(enemyHP <= 0){
                    break;
                    }
    }
    while (life == true);
    if (enemyHP <= 0) {
        cout << endl;
        cout << "Your enemies health is now: 0" << endl;
    }
    cout << endl;
}

void battle3(){
    cout << endl;
    enemyHP = 220;
    userHP = 200;
    life = true;
    cin.ignore();
    system("cls");
    cout << "      ~~~ Round 3 ~~~     " << endl;
    cout << "Your health is currently: " << userHP << endl;
    cout << "The enemies health is currently: " << enemyHP << endl;

    cout << endl;
    cout << "Now select your action:" << endl;
    cout << "    1 - attack" << endl;
    cout << "    2 - block" << endl;
    cout << "    3 - change" << endl;


    do{

        cin >> x;
        switch (x) {
            case 1:

                attack();

                cout << endl;
                cout << endl;

                enemy3Attk();

                healthStats();

                break;
            case 2:
                cout << "User blocked enemies attack." << endl;
                cout << "Your health is currently: " << userHP << endl;
                cout << "The enemies health is currently: " << enemyHP << endl;
                cin.ignore();

                break;

            case 3:
                swtch();
                cin >> newItem;
                item1 = newItem;

                cout << "Your new weapon is " << item1 << endl;
                cout << endl;
                enemy1Attk2();
                cout << endl;
                healthStats();
                cout << endl;
                break;

            default:
                cout << "CRITICAL ERROR # 84" << endl;
                cout << "Invalid input" << endl;
                break;
        }
        if(enemyHP <= 0){
        break;
        }
    }while(life == true);
    if (enemyHP <= 0) {
        cout << endl;
        cout << "Your enemies health is now: 0" << endl;
    }
    cout << endl;
}

void swtch(){
        srand(time(0));

        cout << endl;
        cout << item1 << endl;

        for(int c = 1; c < 2; c++){
            (d = rand()%9 +1);

            if(d == 1){
            cout << sword1;
            cout << endl;
            }

            if(d == 2){
            cout << sword2;
            cout << endl;
            }

            if(d == 3){
            cout << sword3;
            cout << endl;
            }

            if(d == 4){
            cout << staff1;
            cout << endl;
            }

            if(d == 5){
            cout << staff2;
            cout << endl;
            }

            if(d == 6){
            cout << staff3;
            cout << endl;
            }

            if(d == 7){
            cout << shield1;
            cout << endl;
            }

            if(d == 8){
            cout << shield2;
            cout << endl;
            }

            if(d == 9){
            cout << shield3;
            cout << endl;
            }


}
}
void attack(){
            srand(time(0));
            for(e = 1; e < 2; e++){
                (f = rand()%5 +1);
                if (item1 == sword1) {

                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Slash" << endl;
                    cout << "2. Stab" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statSwd1[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 3 || 5){
                            StoreA = statSwd1[0] - 5;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 || 4){
                            StoreA = 10 + statSwd1[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }



                }
                if (item1 == sword2) {
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Slash" << endl;
                    cout << "2. Stab" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statSwd2[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 3 || 5){
                            StoreA = statSwd1[0] - 5;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 || 4){
                            StoreA = 10 + statSwd2[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }
                }
                if(item1 == sword3) {

                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Slash" << endl;
                    cout << "2. Stab" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statSwd1[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 3 || 5){
                            StoreA = statSwd3[0] - 5;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 || 4){
                            StoreA = 10 + statSwd3[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }

                }
                if(item1 == staff1) {
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Fire Ball" << endl;
                    cout << "2. Fire Blast" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statStf1[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 3 || 4 || 5){
                            StoreA = statStf1[0] - 10;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 ){
                            StoreA = 20 + statStf1[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }


                }
                if(item1 == staff2) {
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Ice Beam" << endl;
                    cout << "2. Aqua Cannon" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statStf2[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 3 || 4 || 5){
                            StoreA = statStf2[0] - 10;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 ){
                            StoreA = 20 + statStf2[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }
                }
                if (item1 == staff3) {
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Rock Blast" << endl;
                    cout << "2. Earthquake" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statStf3[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 3 || 4 || 5){
                            StoreA = statStf3[0] - 10;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 ){
                            StoreA = 20 + statStf3[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }


                }
                if(item1 == shield1){
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Shield Bash" << endl;
                    cout << "2. Pyro Berseker Rage" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statSld1[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 4 || 5){
                            StoreA = statSld1[0] - 20;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 || 3 ){
                            StoreA = 45 + statSld1[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }


                }
                if (item1 == shield2) {
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Shield Bash" << endl;
                    cout << "2. Aqua Berseker Rage" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statSld2[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 4 || 5){
                            StoreA = statSld2[0] - 20;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 || 3 ){
                            StoreA = 45 + statSld2[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }

                }
                if (item1 == shield3) {
                    cout << "Select the number of an action of " << item1 << endl;
                    cout << endl;
                    cout << "1. Shield Bash" << endl;
                    cout << "2. Terra-Rage" << endl;
                    cin >> decision;

                    if(decision == 1){

                    StoreA = statSld3[0];
                    enemyHP = enemyHP - StoreA;
                    }
                    if(decision == 2){
                        if(f == 1 || 4 || 5){
                            StoreA = statSld3[0] - 20;
                            cout << endl;
                            cout << "Your attack wasn't very effective." << endl;
                            }
                        if(f == 2 || 3 ){
                            StoreA = 45 + statSld3[0];
                            cout << endl;
                            cout << "Your attack was a critical hit!" << endl;
                            }
                    enemyHP = enemyHP - StoreA;
                    }

                }
}
    cout << endl;
    cout << "You attacked with " << item1;
    cout << endl;

}
// TODO (John-Craig Borman#1#): Fix bug where if attack does less damage then the enemy still blocks and gains health.

void enemy1Attk(){
            srand(time(0));


                    for(int y = 1; y < 2; y++){
                        (b = rand()%3 +1);
                        if(b == 1){
                            cout << "Enemy attacked with fire_sword." << endl;
                            userHP = userHP - statSld2[0];
                            cout << endl;
                            if(userHP <= 0){
                                life = false;
                            }
                        }
                        if (b == 2) {

                            cout << "Enemy blocked attack." << endl;


                            if (item1 == sword1){
                                enemyHP = enemyHP + statSwd1[0];
                            }
                            if (item1 == sword2) {
                                enemyHP = enemyHP + statSwd2[0];
                            }
                            if (item1 == sword3) {
                                enemyHP = enemyHP + statSwd3[0];
                            }
                            if(item1 == staff1){
                                enemyHP = enemyHP + statStf1[0];
                            }
                            if (item1 == staff2) {
                                enemyHP = enemyHP + statStf2[0];
                            }
                            if (item1 == staff3) {
                                enemyHP = enemyHP + statStf3[0];
                            }
                            if(item1 == shield1){
                                enemyHP = enemyHP + statSld1[0];
                            }
                            if (item1 == shield2) {
                                enemyHP = enemyHP + statSld2[0];
                            }
                            if (item1 == shield3) {
                                enemyHP = enemyHP + statSld3[0];
                            }

                        }
                        if(b == 3){
                            cout << "Enemy's attack missed!" << endl;
                        }
                    }
}

void enemy2Attk(){
    srand(time(0));


                for(int y = 1; y < 2; y++){
                    (b = rand()%3 +1);
                    if(b == 1){
                        cout << "Enemy attacked with water_shield." << endl;
                        userHP = userHP - statSld2[0];
                        cout << endl;
                        if(userHP <= 0){
                            life = false;

                        }
                    }
                    if (b == 2) {
                        cout << "Enemy blocked attack." << endl;


                        if (item1 == sword1){
                            enemyHP = enemyHP + statSwd1[0];
                        }
                        if (item1 == sword2) {
                            enemyHP = enemyHP + statSwd2[0];
                        }
                        if (item1 == sword3) {
                            enemyHP = enemyHP + statSwd3[0];
                        }
                        if(item1 == staff1){
                            enemyHP = enemyHP + statStf1[0];
                        }
                        if (item1 == staff2) {
                            enemyHP = enemyHP + statStf2[0];
                        }
                        if (item1 == staff3) {
                            enemyHP = enemyHP + statStf3[0];
                        }
                        if(item1 == shield1){
                            enemyHP = enemyHP + statSld1[0];
                        }
                        if (item1 == shield2) {
                            enemyHP = enemyHP + statSld2[0];
                        }
                        if (item1 == shield3) {
                            enemyHP = enemyHP + statSld3[0];
                        }

                    }
                    if(b == 3){
                        cout << "Enemy's attack missed!" << endl;
                    }
                }

}

void enemy3Attk(){
    srand(time(0));


                for(int y = 1; y < 2; y++){
                    (b = rand()%3 +1);
                    if(b == 1){
                        cout << "Enemy attacked with staff_blaze." << endl;
                        userHP = userHP - statSld2[0];
                        cout << endl;
                        if(userHP <= 0){
                            life = false;
                        }
                    }
                    if (b == 2) {

                        cout << "Enemy blocked attack." << endl;


                        if (item1 == sword1){
                            enemyHP = enemyHP + statSwd1[0];
                        }
                        if (item1 == sword2) {
                            enemyHP = enemyHP + statSwd2[0];
                        }
                        if (item1 == sword3) {
                            enemyHP = enemyHP + statSwd3[0];
                        }
                        if(item1 == staff1){
                            enemyHP = enemyHP + statStf1[0];
                        }
                        if (item1 == staff2) {
                            enemyHP = enemyHP + statStf2[0];
                        }
                        if (item1 == staff3) {
                            enemyHP = enemyHP + statStf3[0];
                        }
                        if(item1 == shield1){
                            enemyHP = enemyHP + statSld1[0];
                        }
                        if (item1 == shield2) {
                            enemyHP = enemyHP + statSld2[0];
                        }
                        if (item1 == shield3) {
                            enemyHP = enemyHP + statSld3[0];
                        }

                    }
                    if(b == 3){
                        cout << "Enemy's attack missed!" << endl;
                    }

                }
}

void enemy1Attk2(){
            srand(time(0));


                    for(int y = 1; y < 2; y++){
                        (b = rand()%2 +1);
                        if(b == 1){
                            cout << "Enemy attacked with fire_sword." << endl;
                            userHP = userHP - statSld2[0];
                            cout << endl;
                            if(userHP <= 0){
                                life = false;
                            }
                        }
                        if(b == 2){
                            cout << "Enemy's attack missed!" << endl;
                        }
                    }
}

void enemy2Attk2(){
    srand(time(0));


                for(int y = 1; y < 2; y++){
                    (b = rand()%2 +1);
                    if(b == 1){
                        cout << "Enemy attacked with water_shield." << endl;
                        userHP = userHP - statSld2[0];
                        cout << endl;
                        if(userHP <= 0){
                            life = false;

                        }
                    }


                    if(b == 2){
                        cout << "Enemy's attack missed!" << endl;
                    }
                }

}

void enemy3Attk2(){
    srand(time(0));


                for(int y = 1; y < 2; y++){
                    (b = rand()%2 +1);
                    if(b == 1){
                        cout << "Enemy attacked with staff_blaze." << endl;
                        userHP = userHP - statSld2[0];
                        cout << endl;
                        if(userHP <= 0){
                            life = false;
                        }
                    }

                    if(b == 2){
                        cout << "Enemy's attack missed!" << endl;
                    }

                }
}

void healthStats(){
                if(userHP <= 0){
                    cout << "Your health is 0" << endl;
                }
                if(enemyHP <= 0){
                    cout << "The enemies health is 0" << endl;
                }
                if(userHP > 0){
                    cout << "Your health is currently: " << userHP << endl;
                }
                if (enemyHP > 0) {
                    cout << "Your enemies health is currently: " << enemyHP << endl;
                }
                cout << endl;
                cin.ignore();}
