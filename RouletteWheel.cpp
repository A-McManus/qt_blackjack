/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   RouletteWheel.cpp
 * Author: etudiant
 *
 * Created on August 1, 2024, 7:30 p.m.
 */

#include "RouletteWheel.h"


RouletteWheel::RouletteWheel ()
{
  widget.setupUi (this);
}

RouletteWheel::~RouletteWheel () { }

void RouletteWheel::straightBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
    thePlayer.changeMoney(-betAmount);
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    int number = getButtonNumber(button);
    game.addStraightUpBet (number, betAmount);
    widget.textEdit->setText(QString::fromStdString(game.getBets()));
    showMoney();
  }
}

void RouletteWheel::redBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
  thePlayer.changeMoney(-betAmount);
  game.addRedBet(betAmount);
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
  }
}

void RouletteWheel::blackBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
  thePlayer.changeMoney(-betAmount);
  game.addBlackBet(betAmount);
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
   }
}
void RouletteWheel::evenBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
  thePlayer.changeMoney(-betAmount);
  game.addEvenBet(betAmount);
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
   }
}
void RouletteWheel::oddBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
  thePlayer.changeMoney(-betAmount);
  game.addOddBet(betAmount);
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
   }
}
void RouletteWheel::manqueBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
  thePlayer.changeMoney(-betAmount);
  game.addManqueBet(betAmount);
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
   }
}
void RouletteWheel::passBet()
{
  if (thePlayer.getMoney() >= betAmount)
  {
  thePlayer.changeMoney(-betAmount);
  game.addPassBet(betAmount);
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
   }
}
void RouletteWheel::play()
{
  spinWheel(); // does nothing ftm will implement when not noob
  int roll = game.roll();
  setDial(roll);
  std::ostringstream temp;
  temp << roll;
  temp << ", ";
  temp << output.str();
  output.str(" ");
  output << temp.str();
  temp.str(" ");
  temp.clear();
  widget.pastRolls->setText(QString::fromStdString(output.str()));
  
  thePlayer.changeMoney (game.getWinnings());
  game.resetTable ();
  widget.textEdit->setText(QString::fromStdString(game.getBets()));
  showMoney();
 
}
void RouletteWheel::setBet5()
{
  betAmount = 5;
  widget.BetDisplay->setValue(betAmount);
}
void RouletteWheel::setBet10()
{
  betAmount = 10;
  widget.BetDisplay->setValue(betAmount);
}
void RouletteWheel::setBet25()
{
  betAmount = 25;
  widget.BetDisplay->setValue(betAmount);
}
void RouletteWheel::setBet50()
{
  betAmount = 50;
  widget.BetDisplay->setValue(betAmount);
}
void RouletteWheel::setBetMax()
{
  betAmount = thePlayer.getMoney();
  widget.BetDisplay->setValue(betAmount);
}
void RouletteWheel::restart()
{
  thePlayer.reset();
  showMoney();
}
void RouletteWheel::setDial(int value)
{
  switch(value)
    {
    case 0: widget.dial->setValue (0); break;
    case 1: widget.dial->setValue (23); break;
    case 2: widget.dial->setValue (6); break;
    case 3: widget.dial->setValue (35); break;
    case 4: widget.dial->setValue (4); break;
    case 5: widget.dial->setValue (19); break;
    case 6: widget.dial->setValue (10); break;
    case 7: widget.dial->setValue (31); break;
    case 8: widget.dial->setValue (16); break;
    case 9: widget.dial->setValue (27); break;
    case 10: widget.dial->setValue (18); break;
    case 11: widget.dial->setValue (14); break;
    case 12: widget.dial->setValue (33); break;
    case 13: widget.dial->setValue (12); break;
    case 14: widget.dial->setValue (25); break;
    case 15: widget.dial->setValue (2); break;
    case 16: widget.dial->setValue (21); break;
    case 17: widget.dial->setValue (8); break;
    case 18: widget.dial->setValue (29); break;
    case 19: widget.dial->setValue (3); break;
    case 20: widget.dial->setValue (24); break;
    case 21: widget.dial->setValue (5); break;
    case 22: widget.dial->setValue (28); break;
    case 23: widget.dial->setValue (17); break;
    case 24: widget.dial->setValue (20); break;
    case 25: widget.dial->setValue (7); break;
    case 26: widget.dial->setValue (36); break;
    case 27: widget.dial->setValue (11); break;
    case 28: widget.dial->setValue (32); break;
    case 29: widget.dial->setValue (30); break;
    case 30: widget.dial->setValue (15); break;
    case 31: widget.dial->setValue (26); break;
    case 32: widget.dial->setValue (1); break;
    case 33: widget.dial->setValue (22); break;
    case 34: widget.dial->setValue (9); break;
    case 35: widget.dial->setValue (34); break;
    case 36: widget.dial->setValue (13); break;
    default: widget.dial->setValue (0);
    
    }
}
int RouletteWheel::getButtonNumber(QPushButton * button)
{
  QString value = button->objectName ().right(2);
  std::string numberString = value.toStdString();
  int number;
  try{
      number = stoi(numberString);
    }
  catch (...){
      value = value.right(1);
      numberString = value.toStdString();
      number = stoi(numberString);
    }
  return number;
}

void RouletteWheel::showMoney()
{
  widget.moneyDisplay->setValue(thePlayer.getMoney ());
}
void RouletteWheel::spinWheel()
{
  
}