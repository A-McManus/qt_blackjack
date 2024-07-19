/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Table.h
 * Author: etudiant
 *
 * Created on June 25, 2024, 7:58 p.m.
 */

#ifndef TABLE_H
#define TABLE_H

#endif /* TABLE_H */
#include "BlackJack.h"
#include "Player.h"
class Table
{
public:
   Table(Player * aPlayer);
  void playBlackjack();
  int getMoney();
  void changeMoney();
  void setBet(int amount);
  void highestBet();
  void getDecision();
  void addMoney(int amount);
private:
  Blackjack Black;
  Player * PtrPlayer;
  int bet = 10; 
  std::string decision;
  int win;
};
