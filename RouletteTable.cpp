/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   RouletteTable.cpp
 * Author: etudiant
 * 
 * Created on July 20, 2024, 2:34 p.m.
 */

#include "RouletteTable.h"

Roulette::Roulette()
{
}
int Roulette::roll()
{
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist37(0,36);
  winningNumber = dist37(rng);
  return winningNumber;
}
void Roulette::addStraightUpBet(int number, int amount)
{
 
  if (checkStraightUp(number) == true)
    {
      for (const auto & element: straightUpBets )
    {
      if (element->getRouletteNumber() == number)  element->increaseBetAmount(amount);
    }
    }
  if (checkStraightUp(number) == false)
    {
  straightUpBets.push_back(std::unique_ptr<StraightUpBet>(new StraightUpBet(amount, number)));
    }
  
}

void Roulette::addBlackBet(int amount)
{
  betBlack = true;
  blackBetAmount += amount;
}
void Roulette::addRedBet(int amount)
{
  betRed = true;
  redBetAmount += amount;
}
void Roulette::addEvenBet(int amount)
{
  betEven = true;
  evenBetAmount += amount;
}
void Roulette::addOddBet(int amount)
{
  betOdd = true;
  oddBetAmount += amount;
}
void Roulette::addManqueBet(int amount)
{
  betManque = true;
  manqueBetAmount += amount;
}
void Roulette::addPassBet(int amount)
{
  betPass = true;
  passBetAmount += amount;
}
int Roulette::getWinnings()
{
  int total = 0;
  if (betBlack == true && determineColor() == 1) 
    {
      total += blackBetAmount * 2;
    }
  if (betRed == true && determineColor() == 2) 
    {
      total += redBetAmount * 2;
    }
  if (betEven == true && determineEven() == true) 
    {
      total += evenBetAmount * 2;
    }
  if (betOdd == true && determineEven() == false) 
    {
      total += oddBetAmount * 2;
    }
  if (betManque == true && winningNumber < 19) 
    {
      total += manqueBetAmount * 2;
    }
  if (betPass == true && winningNumber >= 19) 
    {
      total += passBetAmount * 2;
    }
  for (const auto & element: straightUpBets )
    {
      if (element->getRouletteNumber() == winningNumber) total += element->getBetAmount()*35;
    }
  return total;
}
void Roulette::resetTable()
{
  betBlack = false;
  blackBetAmount = 0;
  betRed = false;
  redBetAmount = 0;
  betEven = false;
  evenBetAmount = 0;
  betOdd = false;
  oddBetAmount = 0;
  betManque = false;
  manqueBetAmount = 0;
  betPass = false;
  passBetAmount = 0;
  straightUpBets.clear();
}
bool Roulette::determineEven()
{
  even = false;
  if (winningNumber % 2 == 0) even = true;
  return even;
}
int Roulette::determineColor() //0 is green, 1 is black, 2 is red
{
  color = 0;
  if (1 <= winningNumber && winningNumber < 11)
    {
      color = 2; //red
      if (determineEven() == true) color = 1; 
    }
  if (11 <= winningNumber && winningNumber < 19)
    {
      color = 1; // black
      if (determineEven() == true) color = 2;
    }
  if (19 <= winningNumber && winningNumber < 29)
    {
      color = 2; // red
      if (determineEven() == true) color = 1;
    }
 if (29 <= winningNumber && winningNumber < 37)
    {
      color = 1; //black
      if (determineEven() == true) color = 2;
    }
  return color;
}


bool Roulette::determineStraightUp()
{
  bool inBets = false;
  for (const auto & element: straightUpBets )
    {
      if (element->getRouletteNumber() == winningNumber) inBets = true;
    }
  return inBets;
}
bool Roulette::checkStraightUp(int number)
{
  bool inBets = false;
  for (const auto & element: straightUpBets )
    {
      if (element->getRouletteNumber() == number) inBets = true;
    }
  return inBets;
}
std::string Roulette::getBets()
{
  std::ostringstream output;
  if (betBlack == true) 
    {
      output << "Black Bet: ";
      output << blackBetAmount;
      output << "\n";
    }
  if (betRed == true) 
    {
       output << "Red Bet: ";
      output << redBetAmount;
      output << "\n";
    }
  if (betEven == true) 
    {
      output << "Even Bet: ";
      output << evenBetAmount;
      output << "\n";
    }
  if (betOdd == true) 
    {
      output << "Odd Bet: ";
      output << oddBetAmount;
      output << "\n";
    }
  if (betManque == true) 
    {
      output << "Manque Bet: ";
      output <<  manqueBetAmount;
      output << "\n";
    }
  if (betPass == true) 
    {
      output << "Even Bet: ";
      output << evenBetAmount;
      output << "\n";
    }
  for (const auto & element: straightUpBets )
    {
      output << element->getRouletteNumber();
      output << " Bet: ";
      output << element->getBetAmount();
      output << "\n";
    }
  return output.str ();
}
