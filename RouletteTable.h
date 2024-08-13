/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   RouletteTable.h
 * Author: etudiant
 *
 * Created on July 20, 2024, 2:34 p.m.
 */

#ifndef ROULETTETABLE_H
#define ROULETTETABLE_H

#endif /* ROULETTETABLE_H */
#include <vector>
#include <memory>
#include "StraightUpBet.h"
#include "GameScreen.h"
#include <random>
#include <time.h>
#include <sstream>
class Roulette
{
public:
  Roulette();
  int roll();
  void addStraightUpBet(int number, int amount);
  void addBlackBet(int amount);
  void addRedBet(int amount);
  void addEvenBet(int amount);
  void addOddBet(int amount);
  void addManqueBet(int amount);
  void addPassBet(int amount);
  int getWinnings();
  void resetTable(); //sets all bets to false and bet amounts to 0
  bool checkStraightUp(int number); // checkis if the number is in straightUpBets;
  std::string getBets();
   
private:
  std::vector <std::unique_ptr<StraightUpBet>> straightUpBets;
  bool betBlack = false;
  bool betRed = false;
  bool betEven = false;
  bool betOdd = false;
  bool betManque = false; // Bet from 1-18
  bool betPass = false;  // bet from 19-36
  
  int blackBetAmount = 0;
  int redBetAmount = 0;
  int evenBetAmount = 0;
  int oddBetAmount = 0;
  int manqueBetAmount = 0;
  int passBetAmount = 0;
  int winningNumber;
  int color;
  bool even;
  
  bool determineEven();
  int determineColor(); //0 is green, 1 is black, 2 is red
 
  bool determineStraightUp(); // checks if winningNumber is in the the straight up bets;
  
 
};