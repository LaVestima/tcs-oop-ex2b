#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QTimer>

class Car : public QObject {
    Q_OBJECT

private:
    int speed;
    int distance;
    QTimer m_timer;

public:
    explicit Car(QObject *parent = 0);
    void speedUp();
    void slowDown();
    int getSpeed();
    int getDistance();
    void setSpeed(int);

signals:

private slots:
    void updateDistance();

public slots:
};

#endif // CAR_H
