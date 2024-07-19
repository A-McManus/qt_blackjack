/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   Table.cpp
 * Author: etudiant
 * 
 * Created on June 25, 2024, 7:58 p.m.
 */

#include "Table.h"
#include <stdlib.h>

using namespace std;
Table::Table(Player * aPlayer):PtrPlayer(aPlayer)
{
  
}

int Table::getMoney()
{
  return PtrPlayer->getMoney ();
}
void Table::addMoney(int amount)
{
  PtrPlayer->changeMoney (amount);
}
void Table::setBet(int amount)
{
  bet = amount;
}

void Table::highestBet()
{
  bet = getMoney();
}
void Table::getDecision()
{
  
  cout << "Current money: " << getMoney() << endl;
  cout << "Current Bet: " << bet << endl;
  cout << "play or change bet?" << endl;
  cin >> decision;
  if (decision == "play")
    {
      if (bet > getMoney())
        {
          bet = getMoney();
          cout << "Too poor, bet changed to: " << bet << endl;
        }
      playBlackjack();
    }
  if (decision == "change" ||decision == "change bet")
    {
     cout << "Bet amount?" << endl;
     cin >> bet;
     getDecision();
    }
  if (decision != "play" && decision != "change" && decision != "change bet")
    {
      cout << "Unkown Command" << endl;
      getDecision();
    }
}
  void Table::changeMoney()
  {
    switch (win)
      {
      case 0: addMoney(-bet); break;
      case 1: addMoney(bet); break;
      case 2: break;
      case 3: addMoney(bet*1.7); break;
      case 4: addMoney(bet*2); break;
      case 5: addMoney(-bet*2); break;
      default: break;
      }
  }

void Table::playBlackjack()
{
  bool canDouble = (getMoney() >= bet * 2 );
  win = Black.play(canDouble);
  changeMoney();
  Black.reset ();
    
}


  