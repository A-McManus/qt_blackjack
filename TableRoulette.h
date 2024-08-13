/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/qtFiles/form.h to edit this template
 */

/* 
 * File:   TableRoulette.h
 * Author: etudiant
 *
 * Created on August 1, 2024, 5:12 p.m.
 */

#ifndef _TABLEROULETTE_H
#define _TABLEROULETTE_H

#include "ui_TableRoulette.h"

class TableRoulette : public QDialog
{
  Q_OBJECT
public:
  TableRoulette ();
  virtual ~TableRoulette ();
private:
  Ui::TableRoulette widget;
};

#endif /* _TABLEROULETTE_H */
