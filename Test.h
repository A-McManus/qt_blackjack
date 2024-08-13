/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file_header.h to edit this template
 */

/* 
 * File:   newFile.h
 * Author: etudiant
 *
 * Created on August 1, 2024, 6:10 p.m.
 */

#ifndef NEWFILE_H
#define NEWFILE_H

#endif /* NEWFILE_H */
#include <QWidget>

class roulette:public QWidget
{
  Q_OBJECT
  public:
    roulette(QWidget *parent = nullptr);
    protected:
      void paintEvent(QPaintEvent *event) override;
      
};