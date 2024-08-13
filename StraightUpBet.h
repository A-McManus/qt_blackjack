/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   StraightUpBet.h
 * Author: etudiant
 *
 * Created on July 20, 2024, 1:41 p.m.
 */

#ifndef STRAIGHTUPBET_H
#define STRAIGHTUPBET_H

#endif /* STRAIGHTUPBET_H */
class StraightUpBet
{
public:
  StraightUpBet(int n_betAmount, int n_rouletteNumber);
  int getRouletteNumber();
  int getBetAmount();
  void setBetAmount(int amount);
  void increaseBetAmount(int amount);
private:
  int betAmount = 0;
  int rouletteNumber;
};