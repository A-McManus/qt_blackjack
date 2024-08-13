/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   StraightUpBet.cpp
 * Author: etudiant
 * 
 * Created on July 20, 2024, 1:41 p.m.
 */

#include "StraightUpBet.h"

StraightUpBet::StraightUpBet(int n_betAmount, int n_rouletteNumber): betAmount(n_betAmount), rouletteNumber(n_rouletteNumber)
{
  
}
int StraightUpBet::getRouletteNumber()
{
  return rouletteNumber;
}
int StraightUpBet::getBetAmount()
{
  return betAmount;
}
void StraightUpBet::setBetAmount(int amount)
{
  betAmount = amount;
}
void StraightUpBet::increaseBetAmount(int amount)
{
  betAmount += amount;
}