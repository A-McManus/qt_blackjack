/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   BlackJack.h
 * Author: etudiant
 *
 * Created on June 9, 2024, 2:09 p.m.
 */

#ifndef BLACKJACK_H
#define BLACKJACK_H

#endif /* BLACKJACK_H */
#include "DealerHand.h"
#include <iostream>
class Blackjack
{
public:
  Blackjack();
  Blackjack(PlayerHand aPlayer, DealerHand aDealer);
  
 //Actions that affect Gamestate
  void hit();
  void stay();
  void DoubleDown();
  void dealersTurn();
  void reset();
  void endGame();
  void start();
  void playRound(bool canDouble);
  void hitOrStay(bool canDouble);
  int play(bool canDouble);
  
  //Getters
  int getPlayerTotal();
  int getDealerTotal();
  bool getGameNotOver();
  int getRound();
  std::string getDecision();
  int getWin(); 
  Card getPlayerCard(int slot);
  Card getDealerCard(int slot);
  
  
  
  
  //Setters
  void setGameNotOver(bool aDecison);
  void increaseRound();
  void setDecision(std::string aDecision);
  void setWin(int digit); //0 for loss, 1 for win, 2 for tie, 3 for blackjack, 4 for DD win 5 for DD fail
  
  
  
  bool checkPlayerTotal();
  bool checkDealerTotal();
  bool checkBothTotal();
  bool checkBlackjack();
  bool checkBust();
  //Outputs
  std::string showDealerHiddenCards();
  std::string showDealerCards();
  std::string showPlayerCards();
  std::string playerWin();
  std::string playerLoss();
  std::string playerBjWin();
  
  
  //test functions 
  int amountPlayerCards();
  int amountDealerCards();
  void givePlayer(const Card & aCard);
  void giveDealer(const Card & aCard);
private:
  PlayerHand Player;
  DealerHand Dealer;
  Deck TheDeck;
  bool gameNotOver = true;
  int round = 1;
  std::string decision;
  int win = 2; //0 for loss, 1 for win, 2 for tie, 3 for blackjack, 4 for DD win 5 for DD fail
  bool doubleDown = false;
};