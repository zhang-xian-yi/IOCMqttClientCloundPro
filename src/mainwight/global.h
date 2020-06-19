#ifndef GLOBAL_H
#define GLOBAL_H

#include <QTextCodec>

#define FromQString(x) QTextCodec::codecForLocale()->fromUnicode(x).toStdString()
#define ToQString(x) QTextCodec::codecForLocale()->toUnicode((x).c_str())


#endif // GLOBAL_H
