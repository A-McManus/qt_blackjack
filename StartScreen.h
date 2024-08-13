/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   StartScreen.h
 * Author: etudiant
 *
 * Created on June 28, 2024, 8:31 p.m.
 */

#ifndef _STARTSCREEN_H
#define _STARTSCREEN_H

#include "Test.h"
#include "ui_StartScreen.h"
#include"RouletteWheel.h"

class StartScreen : public QDialog
{
  Q_OBJECT
public:
  StartScreen ();
  virtual ~StartScreen ();
  
  public slots:
    void play();
    void playRoulette();
private:
  Ui::StartScreen widget;
  GameScreen Game;
  RouletteWheel aRoulette;
};

#endif /* _STARTSCREEN_H */
