#ifndef MYPERSON_H
#define MYPERSON_H

#include <QObject>

class MyPerson : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE set_name NOTIFY name_change)
    Q_PROPERTY(QString age READ age WRITE set_age NOTIFY age_change)
public:
    explicit MyPerson(QObject *parent = nullptr);
    MyPerson(const QString &name, int age, QObject *parent = nullptr);

    QString name() const{
        return m_name;
    }
    int age() const{
        return m_age;
    }
    void set_name(const QString &name );
    void set_age( int age);
signals:
    void name_change();
    void age_change();

private:
    QString m_name;
    int m_age;

};

#endif // MYPERSON_H
