/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   GameScreen.h
 * Author: etudiant
 *
 * Created on June 28, 2024, 9:14 p.m.
 */

#ifndef _GAMESCREEN_H
#define _GAMESCREEN_H
#include "BlackJack.h"
#include "ui_GameScreen.h"
#include "Player.h"

class GameScreen : public QDialog
{
  Q_OBJECT
public:
  GameScreen ();
  virtual ~GameScreen ();
  public slots:
    
  void play();
  void hit();
  void stand();
  void doubleDown();
  void restart();
  void setBet5();
    void setBet10();
    void setBet25();
    void setBet50();
    void setBetMax();
    void showCardLog();
  //void updateMoney();
  //void updateRound();
  private:
    void showDealer();
    void showHiddenDealer();
    void showPlayer();
    void editLog(std::string aString);
    bool checkBust();
    void findWinner();
    int getMoney();
    int getBet();
    void addMoney(int amount);
    void updateMoney();
    void changeMoney();
    void endGame();
    void setBet(int amount);
    void ShowCardLog();
    
    bool checkPlayerFunds();  //checks to see if the player has enough funds to play
  Ui::GameScreen ui;
  Blackjack Black;
  Player thePlayer;
  
};

#endif /* _GAMESCREEN_H */
