/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.cc to edit this template
 */

/*
 * File:   GameScreen.cpp
 * Author: etudiant
 *
 * Created on June 28, 2024, 9:14 p.m.
 */

#include "GameScreen.h"
void GameScreen::showHiddenDealer ()
{
  ui.Dealer_Hand->setText(Black.showDealerHiddenCards ().c_str());
}
void GameScreen::showPlayer ()
{
  ui.Player_Hand->setText(Black.showPlayerCards ().c_str());
}
void GameScreen::showDealer()
{
  ui.Dealer_Hand->setText(Black.showDealerCards ().c_str());
}

void GameScreen::editLog(std::string aString)
{
  ui.Log->setText(aString.c_str ());
}
GameScreen::GameScreen ()
{
  ui.setupUi (this);
  endGame ();
}

void GameScreen::play()
{
  if (Black.getGameNotOver () == true) editLog("Game In Progress"); //should be an exception 
  if (checkPlayerFunds() == false)
    {
      ui.Bet->setValue(getMoney()) ;
    }
 if (Black.getGameNotOver() == false)
 {
     
     ui.Bet->setReadOnly(true);
  editLog("Hit or Stay?");
  Black.reset ();
  showPlayer();
  showHiddenDealer();
  if (Black.checkBlackjack () == true)
    {
      if (Black.getDealerTotal () == 21 && Black.getPlayerTotal () == 21)
        {
          editLog("Tie");
          Black.setWin(2);
         endGame(); 
        }
   if (Black.getDealerTotal () == 21 && Black.getPlayerTotal () != 21)
        {
          editLog(Black.playerLoss ());
         endGame(); 
        }
   if (Black.getDealerTotal () != 21 && Black.getPlayerTotal () == 21)
        {
          editLog(Black.playerBjWin ());
         endGame(); 
        }
    }
 }
}

void GameScreen::hit()
{
   if (Black.getGameNotOver () == true) Black.hit ();
 showPlayer();
 checkBust ();
}
void GameScreen::stand()
{
   if (Black.getGameNotOver () == true)
    {
     Black.stay ();
     showDealer();
     findWinner(); 
    }
}
void GameScreen::doubleDown()
{
  if (getMoney() < ui.Bet->value() * 2) editLog("Not enough Funds");
  if (Black.amountPlayerCards () > 2) editLog("Double Down only Available on the First Round");
  if (Black.amountPlayerCards () == 2 && getMoney() >= ui.Bet->value() * 2)
    {
  Black.DoubleDown ();
  showPlayer();
  showDealer();
  
  if (checkBust() == false)findWinner(); 
    }
}
void GameScreen::restart()
{
  if (Black.getGameNotOver () == false)
    {
  thePlayer.reset ();
  updateMoney();
    }
}
bool GameScreen::checkBust()
{
  if (Black.checkBust () == true)
    {
    editLog(Black.playerLoss ());
    endGame ();
    }
  return Black.checkBust ();
}
void GameScreen::findWinner()
{
  
  if (Black.getPlayerTotal () == Black.getDealerTotal ()) 
    {
      editLog("Tie");
      Black.setWin(2);
      endGame ();
    }
  if (Black.getPlayerTotal () > Black.getDealerTotal () || Black.getDealerTotal () > 21) 
    {
      editLog(Black.playerWin ());
      endGame ();
    }
  if (Black.getPlayerTotal () < Black.getDealerTotal () && Black.getDealerTotal () <= 21) 
    {
      editLog(Black.playerLoss ());
      endGame ();
    }
    
}
int GameScreen::getMoney()
{
  return thePlayer.getMoney ();
}
int GameScreen::getBet()
{
  return ui.Bet->value ();
}
void GameScreen::changeMoney()
{
 int bet = ui.Bet->value ();
  switch (Black.getWin())
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
void GameScreen::addMoney(int amount)
{
  thePlayer.changeMoney (amount);
}
void GameScreen::updateMoney()
{
  ui.Money->setValue (getMoney());
}
void GameScreen::endGame()
{
  Black.endGame();
  changeMoney();
  ui.Bet->setReadOnly(false);
  ui.Money->setValue (getMoney());
}
bool GameScreen::checkPlayerFunds()
{
  bool enoughFunds = false;
  if (ui.Bet->value() <= getMoney()) enoughFunds = true;
  return enoughFunds;
}
void GameScreen::setBet(int amount)
{
  ui.Bet->setValue (amount);
}
void GameScreen::showCardLog()
{
  editLog(Black.getPlayerCard (0).getCard ());
}
void GameScreen::setBet5()
{
  if (Black.getGameNotOver () == false)
    {
  setBet(5);
    }
}
void GameScreen::setBet10()
{
  if (Black.getGameNotOver () == false)
    {
  setBet(10);
    }
}
void GameScreen::setBet25()
{
  if (Black.getGameNotOver () == false)
    {
  setBet(25);
    }
}
void GameScreen::setBet50()
{
  if (Black.getGameNotOver () == false)
    {
  setBet(50);
    }
}
void GameScreen::setBetMax()
{
  if (Black.getGameNotOver () == false)
    {
  setBet(getMoney());
    }
}
GameScreen::~GameScreen () { }
