/*
;iConfig source code and documentation is released under a GPLv3 license. 
;
; A copy is available from the Open Source Initiative site at:
;	https://opensource.org/licenses/gpl-3.0.html
*/

#include "QtSingleApplicationWrapper.h"
#include <QSharedMemory>
#include <iostream>

static bool isInstanceRunning(const QString &appId) {
  QSharedMemory sharedMem(appId);
  sharedMem.attach();
  return sharedMem.isAttached() && sharedMem.size() > 0;
}

QtSingleApplicationWrapper::QtSingleApplicationWrapper(int &argc, char **argv) :
  QApplication(argc, argv),
  m_appId(QUuid::createUuid()) {
}

QtSingleApplicationWrapper::QtSingleApplicationWrapper(const QString &appId, int &argc, char **argv) :
  QApplication(argc, argv),
  m_appId(appId.toLatin1()) {
}

bool QtSingleApplicationWrapper::isRunning() {
  return isInstanceRunning(m_appId.toString());
}

void QtSingleApplicationWrapper::sendMessage(const QString &message) {
  // Simple messaging - in a real implementation this would use QLocalSocket
  std::cout << "Message sent: " << message.toStdString() << std::endl;
}
