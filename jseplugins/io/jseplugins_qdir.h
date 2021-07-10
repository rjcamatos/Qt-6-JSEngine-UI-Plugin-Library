#ifndef JSPLUGINS_QDIR_H
#define JSPLUGINS_QDIR_H

#include <QObject>
#include <QDir>
#include <QString>
#include <QStringList>

class jseplugins_qdir : public QObject
{
    Q_OBJECT



public:

    enum Filters { Dirs        = 0x001,
                  Files       = 0x002,
                  Drives      = 0x004,
                  NoSymLinks  = 0x008,
                  AllEntries  = Dirs | Files | Drives,
                  TypeMask    = 0x00f,

                  Readable    = 0x010,
                  Writable    = 0x020,
                  Executable  = 0x040,
                  PermissionMask    = 0x070,

                  Modified    = 0x080,
                  Hidden      = 0x100,
                  System      = 0x200,

                  AccessMask  = 0x3F0,

                  AllDirs       = 0x400,
                  CaseSensitive = 0x800,
                  NoDot         = 0x2000,
                  NoDotDot      = 0x4000,
                  NoDotAndDotDot = NoDot | NoDotDot,

                  NoFilter = -1
    };

    enum SortFlags { Name        = 0x00,
                    Time        = 0x01,
                    Size        = 0x02,
                    Unsorted    = 0x03,
                    SortByMask  = 0x03,

                    DirsFirst   = 0x04,
                    Reversed    = 0x08,
                    IgnoreCase  = 0x10,
                    DirsLast    = 0x20,
                    LocaleAware = 0x40,
                    Type        = 0x80,
                    NoSort = -1
    };

    Q_INVOKABLE jseplugins_qdir(const QString &path = QString());
    Q_INVOKABLE QStringList	entryList(const QStringList &nameFilters, Filters filters = NoFilter, SortFlags sort = NoSort) const;
    Q_ENUM(Filters);
    Q_ENUM(SortFlags);

private:
    QDir *_qdir;
};

#endif
