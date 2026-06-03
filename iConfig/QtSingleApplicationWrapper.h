/*
;iConfig source code and documentation is released under a GPLv3 license. 
;
; A copy is available from the Open Source Initiative site at:
;	https://opensource.org/licenses/gpl-3.0.html
*/

#ifndef QAPPLICATIONWRAPPER_H
#define QAPPLICATIONWRAPPER_H

#include <QApplication>
#include <QUuid>

// Modern replacement for QtSingleApplication - uses QUuid for unique app ID
class QtSingleApplicationWrapper : public QApplication
{
  Q_OBJECT
public:
  explicit QtSingleApplicationWrapper( int & argc, char ** argv );
  explicit QtSingleApplicationWrapper( const QString & appId, int & argc, char ** argv );

  bool isRunning();
  void sendMessage(const QString &message);

private:
  QUuid m_appId;
};

#endif // QAPPLICATIONWRAPPER_H
