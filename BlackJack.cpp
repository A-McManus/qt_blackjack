/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.cc to edit this template
 */

/* 
 * File:   BlackJack.cpp
 * Author: etudiant
 * 
 * Created on June 9, 2024, 2:09 p.m.
 */

#include "BlackJack.h"

using namespace std;

Blackjack::Blackjack():TheDeck(), Player(), Dealer() 
{
  TheDeck.shuffleDeck();
  Player.addCard (TheDeck.getCard ());
  Dealer.addCard(TheDeck.getCard());
  Player.addCard (TheDeck.getCard ());
  Dealer.addCard(TheDeck.getCard());
}


Blackjack::Blackjack(PlayerHand aPlayer, DealerHand aDealer):Player(aPlayer), Dealer(aDealer)
{

}
void Blackjack::reset()
{
  TheDeck.resetDeck ();
  gameNotOver = true;
  doubleDown = false;
  TheDeck.shuffleDeck();
  Player.clearDeck ();
  Dealer.clearDeck ();
  Player.addCard (TheDeck.getCard ());
  Dealer.addCard(TheDeck.getCard());
  Player.addCard (TheDeck.getCard ());
  Dealer.addCard(TheDeck.getCard());
  
}

int Blackjack::getDealerTotal()
{
  return Dealer.getTotal ();
}

int Blackjack:: getPlayerTotal()
{
  return Player.getTotal ();
}

int Blackjack::getRound()
{
  return round;
}

bool Blackjack::getGameNotOver()
{
 return gameNotOver; 
}

std::string Blackjack::getDecision()
{
  return decision;
}
int Blackjack::getWin()
{
  return win;
}
Card Blackjack::getPlayerCard(int slot)
{
  return Player.getCard (slot);
}
Card Blackjack::getDealerCard(int slot)
{
  return Dealer.getCard (slot);
}
void Blackjack::increaseRound()
{
  round += 1;
}

void Blackjack::setGameNotOver(bool aDecision)
{
  decision = aDecision;
}
void Blackjack::setWin(int amount)
{
  win = amount;
}
bool Blackjack:: checkDealerTotal()
{
  return Dealer.checkTotal ();
}

bool Blackjack:: checkPlayerTotal()
{
  return Player.checkTotal ();
}

bool Blackjack::checkBothTotal()
{
  bool SomeoneBusted = false;
 if( checkDealerTotal() || checkPlayerTotal() == true) SomeoneBusted = true;
  return SomeoneBusted;
 
}

bool Blackjack::checkBlackjack()
{
  bool blackjack = false;
  bool PlayerBlackjack = false;
  bool DealerBlackjack = false;
  if(getPlayerTotal() == 21) PlayerBlackjack = true;
  if(getDealerTotal() == 21) DealerBlackjack = true;
  if(PlayerBlackjack && DealerBlackjack == true)
    {
     reset();
     blackjack = true;
     return blackjack;
    }
  if (PlayerBlackjack == true)
    {
      playerBjWin();
      blackjack = true;
    }
  if (DealerBlackjack == true)
    {
      playerLoss();
      blackjack = true;
    }
  gameNotOver = !blackjack;
  return blackjack;
}
bool Blackjack::checkBust()
{
  bool bust = false;
  if (Player.getTotal() > 21) bust = true;
  return bust;
}

std::string Blackjack::playerWin()
{
  endGame();
  win = 1;
  if (doubleDown == true) win = 4;
  std::ostringstream output;
  output << "Player Win with ";
  output << Player.getTotal ();
  output << " to Dealers ";
  output << Dealer.getTotal ();
  output << "\n";
  return output.str();
  
}
std::string Blackjack::playerBjWin()
{
  endGame();
  win = 3;
  std::ostringstream output;
  output << "Player Win with ";
  output << Player.getTotal ();
  output << " to Dealers ";
  output << Dealer.getTotal ();
  output << "\n";
  return output.str();
  
}

std::string Blackjack::playerLoss()
{
  endGame();
  win = 0;
  if (doubleDown == true) win = 5;
  std::ostringstream output;
  output << "Player Loss with ";
  output << Player.getTotal ();
  output << " to Dealers ";
  output << Dealer.getTotal ();
  output << "\n";
  return output.str();
  
}

void Blackjack::hit()
{
  Player.addCard  (TheDeck.getCard ());
}

void Blackjack::stay()
{
  dealersTurn();
}
void Blackjack::DoubleDown()
{
  Player.addCard  (TheDeck.getCard ());
  doubleDown = true;
  dealersTurn();
}

void Blackjack::dealersTurn()
{
  while (Dealer.getTotal () < 17)
    {
      Dealer.addCard (TheDeck.getCard ());
    }
  endGame();
}

void Blackjack::endGame()
{
  gameNotOver = false;
}

void Blackjack::start()
{
  std::cout << "Game Start " << endl;
  std::cout<< "Dealer Hand: " << showDealerHiddenCards () << endl;
  std::cout << "Player Hand: "<< showPlayerCards() << endl;
  if (checkBlackjack() == true)
  {
    if (getPlayerTotal() == 21 && getDealerTotal() == 21)
      {
      cout << "Tie" <<endl;
      win = 2;
      endGame();
      }
    if (getPlayerTotal() == 21 && getDealerTotal() != 21) playerWin();
    if (getDealerTotal() == 21 && getPlayerTotal() != 21) playerLoss();
  }
}

void Blackjack::playRound(bool canDouble)
{
  cout << "Round " << round << endl;
  round++;
  doubleDown = false;
  cout << "hit or stay?" << endl;
  cin >> decision;
  hitOrStay(canDouble);
  checkBust();
}
int Blackjack::play(bool canDouble)
{
  start();
  while (getGameNotOver () == true)
    {
      playRound (canDouble);
    }
  return win;
}


void Blackjack:: hitOrStay(bool canDouble)
{
  if (decision == "hit") hit();
  if (decision == "stay") stay();
  if (decision == "dd" ||decision == "double" || decision == "double down") 
    {
      if (canDouble == true)  DoubleDown();
      if (canDouble == false)
        {
          cout << "Too poor to double down"<< endl;
          
        }
    }
     
}

std::string Blackjack::showDealerCards()
{
   return Dealer.showHand ();
}
std::string Blackjack::showDealerHiddenCards()
{
  return Dealer.showHiddenHand ();
}
std::string Blackjack::showPlayerCards()
{
  return Player.showHand ();
}


//test functions 
int Blackjack::amountPlayerCards()
{
  return Player.getSize ();
}
int Blackjack::amountDealerCards()
{
  return Dealer.getSize ();
}
/*
 \brief adds a specific card to the player
 */
void Blackjack::givePlayer(const Card & aCard)
{
  Player.addCard (aCard);
}

void Blackjack::giveDealer(const Card & aCard)
{
  Dealer.addCard (aCard);
}
