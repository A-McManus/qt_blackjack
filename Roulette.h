/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   Roulette.h
 * Author: etudiant
 *
 * Created on July 20, 2024, 2:11 p.m.
 */

#ifndef ROULETTE_H
#define ROULETTE_H

#endif /* ROULETTE_H */

#include <vector>
#include <memory>
#include "StraightUpBet"
#include "Player.h"
class Roulette
{
public:
  Roulette(Player thePlayer);
  
private:
  std:vector <std::unique_ptr<StraightUpBet>> straightUpBets;
  bool betBlack = false;
  bool betRed = false;
  bool betManque = false; // Bet from 1-18
  bool betPass = false;  // bet from 19-36
  
  int blackBetAmount = 0;
  int redBetAmount = 0;
  int betManqueAmount = 0;
  int betPassAmount = 0;
  int winningNumber;
  
  bool determineEven();
};