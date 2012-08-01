#ifndef VirtualBot_H
#define VirtualBot_H

#include <QtGui/QMainWindow>
#include <QApplication>
#include <QTimer>
#include "botviewer.h"
#include "robot.h"
#include "map.h"
#include "particlefilter.h"
#include "particlefilterviewer.h"


class VirtualBot : public QWidget
{
Q_OBJECT;
public:
   VirtualBot();
   virtual ~VirtualBot();
protected:
  virtual void keyPressEvent(QKeyEvent* );
  
private slots:
  void updateFilter();
private:
  double last_x;
  BotViewer* viewer;
  ParticleFilterViewer* partViewer;
  Robot* robot;
  Map* map;
  ParticleFilter* particleFilter;
  QTimer* updater;
};

#endif // VirtualBot_H
