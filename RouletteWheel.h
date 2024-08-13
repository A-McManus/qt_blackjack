/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   RouletteWheel.h
 * Author: etudiant
 *
 * Created on August 1, 2024, 7:30 p.m.
 */

#ifndef _ROULETTEWHEEL_H
#define _ROULETTEWHEEL_H
#include "ui_RouletteWheel.h"
#include <QWidget>
#include "RouletteTable.h"

class RouletteWheel : public QWidget
{
  Q_OBJECT
  public slots:
    void straightBet();
    void redBet();
    void blackBet();
    void evenBet();
    void oddBet();
    void passBet();
    void manqueBet();
    void play();
    void setBet5();
    void setBet10();
    void setBet25();
    void setBet50();
    void setBetMax();
    void restart();
public:
  RouletteWheel ();
  virtual ~RouletteWheel ();
  protected:
private:
  void setDial(int value);
  int getButtonNumber(QPushButton* button);
  Ui::RouletteWheel widget;
  Roulette game;
  int betAmount = 5;
  Player thePlayer;
  void showMoney();
  void spinWheel();
  std::ostringstream output;
};

#endif /* _ROULETTEWHEEL_H */
